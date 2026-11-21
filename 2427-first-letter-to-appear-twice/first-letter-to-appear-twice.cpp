class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        int n= s.size();
        for(int i=0;i<n;i++)
        {
            if(mp.find(s[i])!=mp.end()) {
            return s[i];
            break;
            }
            mp[s[i]]++;
        }
        return -1;
    }
};