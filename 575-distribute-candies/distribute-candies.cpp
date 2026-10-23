class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>mp;
        int n=candyType.size();
        for(int i=0;i<n;i++)
        {
            mp[candyType[i]]++;
        }
        int ans=mp.size();
        if(ans>n/2) ans=n/2;
        return ans;
    }
};