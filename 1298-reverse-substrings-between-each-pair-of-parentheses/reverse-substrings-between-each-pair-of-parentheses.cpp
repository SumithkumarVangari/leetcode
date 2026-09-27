class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.size();
        stack<char>main;
        stack<char>dub;
        stack<char>ss;
        for(int i=0;i<n;i++)
        {
            if(s[i]==')')
            {
                while(main.top()!='(')
                {
                    dub.push(main.top());
                    main.pop();
                }
                main.pop();
                while(!dub.empty())
                {
                    ss.push(dub.top());
                    dub.pop();
                }
                while(!ss.empty())
                {
                    main.push(ss.top());
                    ss.pop();
                }
            }
           else main.push(s[i]);
        }
        string ans="";
        while(!main.empty())
        {
            ans.push_back(main.top());
            main.pop();
        }
     reverse(ans.begin(),ans.end());
       return ans;
    }
};