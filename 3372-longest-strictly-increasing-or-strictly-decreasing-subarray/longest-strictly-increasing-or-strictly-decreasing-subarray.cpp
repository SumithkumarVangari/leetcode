class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int cnt=1,maxi=1,n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                cnt++;
            }
            else
            {
                cnt=1;
            }
            maxi=max(maxi,cnt);
        }
        cnt=1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                cnt++;
            }
            else
            {
                cnt=1;
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};