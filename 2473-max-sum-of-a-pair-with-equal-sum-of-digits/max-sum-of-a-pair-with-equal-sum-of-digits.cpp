class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n=nums.size(),maxi=-1,sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        { 
            sum=0;
            int k=nums[i];
            while(k!=0)
            {
                int r=k%10;
                k=k/10;
                sum+=r;
            }
            if(mp.find(sum)!=mp.end())
            {
                maxi=max(maxi,mp[sum]+nums[i]);
            }
           mp[sum]=max(mp[sum],nums[i]);
        }
      return maxi;
    }
};