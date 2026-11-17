class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int xcnt=0,ycnt=0;
        stack<char>st;
        string temp="";
        if(y>x){
        for(int i=0;i<s.size();i++)
        {
            if(!st.empty() && st.top()=='b' && s[i]=='a')
            {
               st.pop();
               ycnt++;
            }
            else st.push(s[i]);
        }
        while(!st.empty())
        {
            temp+=st.top();
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++)
        {
            if(!st.empty() && st.top()=='a' && temp[i]=='b')
            {
                st.pop();
                xcnt++;
            }
            else st.push(temp[i]);
        }
        }
        else
        {
             for(int i=0;i<s.size();i++)
        {
            if(!st.empty() && st.top()=='a' && s[i]=='b')
            {
               st.pop();
               xcnt++;
            }
            else st.push(s[i]);
        }
        while(!st.empty())
        {
            temp+=st.top();
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++)
        {
            if(!st.empty() && st.top()=='b' && temp[i]=='a')
            {
                st.pop();
                ycnt++;
            }
            else st.push(temp[i]);
        }
        }
        return x*xcnt+y*ycnt;
    }
};