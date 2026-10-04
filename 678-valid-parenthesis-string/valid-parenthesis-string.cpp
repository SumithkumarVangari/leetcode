class Solution {
public:
    bool checkValidString(string s) {

        stack<int> st;  // positions of '('
        stack<int> mm;  // positions of '*'

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                st.push(i);
            }
            else if(s[i] == '*')
            {
                mm.push(i);
            }
            else
            {
                if(!st.empty())
                    st.pop();
                else if(!mm.empty())
                    mm.pop();
                else
                    return false;
            }
        }

        while(!st.empty() && !mm.empty())
        {
            // '*' must be AFTER '('
            if(st.top() < mm.top())
            {
                st.pop();
                mm.pop();
            }
            else
            {
                return false;
            }
        }

        return st.empty();
    }
};