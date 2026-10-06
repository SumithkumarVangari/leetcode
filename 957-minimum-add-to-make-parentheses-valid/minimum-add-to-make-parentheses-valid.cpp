class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size(),cnt=0;
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') st.push(s[i]);
            else
            {
                if(!st.empty() && st.top()=='(') st.pop();
                else{
                        st.push(s[i]);
                }
            }
        }
        while(!st.empty())
        {
            st.pop();
            cnt++;
        }
       return cnt;
    }
};