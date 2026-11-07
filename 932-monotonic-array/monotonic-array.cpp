class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size(),j=0;
        if(nums[0]>nums[n-1])
        {
            for(int i=0;i<n-1;i++)
            {
               j=i+1;
               if(nums[i]<nums[j]) return false;
            }
        }
        else{
         for(int i=0;i<n-1;i++)
            {
               j=i+1;
               if(nums[i]>nums[j]) return false;
            }
        }
        return true;
    }
};