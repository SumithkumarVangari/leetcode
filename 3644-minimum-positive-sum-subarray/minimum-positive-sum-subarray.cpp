class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mini=INT_MAX,n=nums.size(),sum=0;
        while(l<=r)
        {
            int j=0;
            sum=0;
            for(int i=0;i<n;i++)
            {
                
               sum+=nums[i];
               if(i-j+1==l)
               {
               if(sum>0) mini=min(mini,sum);
                sum-=nums[j];
                j++;
               }
            }
            l++;
        }
       
        return (mini==INT_MAX) ? -1 :mini;
    }
};