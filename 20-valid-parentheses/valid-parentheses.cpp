class Solution {
public:
    bool isValid(string s) {
        stack<char>sk;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            sk.push(s[i]);
            else
            {
                if(sk.empty()) return false;
                char ch=sk.top();
                if(s[i]==')'&&ch=='(' || s[i]=='}'&&ch=='{' || s[i]==']'&&ch=='[')
                sk.pop();
                else
                {
                    sk.push(s[i]);
                }
            }
        }
        return sk.empty();
    }
};