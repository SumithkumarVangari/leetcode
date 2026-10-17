class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int k=nums.size(),m=0;
        for(int i=0;i<k;i++)
        {
            int cnt = (nums[i] == 0) ? 1 : log10(abs(nums[i])) + 1;
             if(cnt%2==0) m++;
        }
        return m;
    }
};