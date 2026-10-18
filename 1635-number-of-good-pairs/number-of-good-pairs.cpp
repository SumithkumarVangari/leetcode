class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
         int cnt=0;
         for(int i=0;i<n;i++)
         {
            if(mp.find(nums[i])!=mp.end())
            {
                cnt+=mp[nums[i]];
            }
            mp[nums[i]]++;
         }
         return cnt;
    }
};