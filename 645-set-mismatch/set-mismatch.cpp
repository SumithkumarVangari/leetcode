class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans(2);
        unordered_map<int,int>mp;
        int n=nums.size(),j=1;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it : mp)
        {
            if(it.second >1) ans[0]=it.first;
        }
        for(int i=0;i<n;i++)
        {
             if(mp.find(j)==mp.end()) ans[1]=j; 
             j++;
        }
        return ans;
    }
};