class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size(),sum=0;
        unordered_map<char,int>mp;
        for(int i=0;i<26;i++)
        {
            mp['a'+i]=26-i;
        }
       for(int i=0;i<n;i++)
       {
        sum+=mp[s[i]]*(i+1);
       }
       return sum;
    }
};