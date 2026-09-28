class Solution {
public:
    int maxDepth(string s) {
        int n=s.size(),cnt=0,maxi=0;
        stack<char>st;
       for(int i=0;i<n;i++)
       {
         if(s[i]=='(') 
         {
            cnt++;
            maxi=max(maxi,cnt);
         }
         else if(s[i]==')') cnt--;
       }
       return maxi;
    }
};