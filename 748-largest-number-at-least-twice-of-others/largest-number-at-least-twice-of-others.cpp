class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size(),cnt=0;
       int maxi=*max_element(nums.begin(),nums.end());
       for(int i=0;i<n;i++)
       {
        if(nums[i]!=maxi && maxi<2*nums[i]) cnt++;
       }
      if(cnt==0)
      {
        for(int i=0;i<n;i++)
        {
            if(nums[i]==maxi)
            {
                return i;
                break;
            }
        }
      }
      return -1;
    }
};