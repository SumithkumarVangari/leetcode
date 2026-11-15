class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        int n=text.size();
        for(int i=0;i<n;i++)
        {
            mp[text[i]]++;
        }
        vector<int>ans;
        
        ans.push_back(mp['b']);
        ans.push_back(mp['a']);
        ans.push_back(mp['n']);
        ans.push_back(mp['l']/2);
        ans.push_back(mp['o']/2);
        int mini=*min_element(ans.begin(),ans.end());
        return mini;

    }
};