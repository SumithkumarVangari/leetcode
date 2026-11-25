class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size(),maxi=INT_MIN,element=-1,leftCount=0;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
         for(auto it : mp)
         {
          if(it.second>maxi)
          {
            maxi=it.second;
            element=it.first;
          }
         }
         for(int i=0;i<n;i++)
         {
          
    if(nums[i] == element)
        leftCount++;

    int rightCount = maxi - leftCount;

    if(leftCount * 2 > i+1 &&
       rightCount * 2 > n-i-1)
    {
        return i;
    }
         }
         return -1;
    }
};