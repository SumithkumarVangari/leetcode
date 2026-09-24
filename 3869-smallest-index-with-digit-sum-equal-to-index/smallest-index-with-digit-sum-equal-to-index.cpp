class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int sum=0;
            int k=nums[i];
            while(k!=0)
            {
                 int r=k%10;
                 k=k/10;
                 sum+=r;
            }
            if(i==sum) return i;
        }
        return -1;
    }
};