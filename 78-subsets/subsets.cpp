class Solution {
public:
 vector<vector<int>>ans;
void subsets(int index,vector<int>&nums,vector<int>&temp)
{
    if(index==nums.size())
    {
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[index]);
    subsets(index+1,nums,temp);
    temp.pop_back();
    subsets(index+1,nums,temp);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        
        subsets(0,nums,temp);
        return ans;
    }
};