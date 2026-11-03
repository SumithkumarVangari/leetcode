class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n =nums.size(),cnt=0;
        int maxi=*max_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            cnt+=maxi-nums[i];
        }
        return cnt;
    }
};