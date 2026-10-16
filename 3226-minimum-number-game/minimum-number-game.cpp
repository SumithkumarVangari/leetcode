class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>a;
        vector<int>b;
        vector<int>ans;
        int n=nums.size();
      sort(nums.begin(),nums.end());
      for(int i=0;i<n-1;i+=2)
      {
          a.push_back(nums[i]);
          b.push_back(nums[i+1]);
      }
      int k=a.size();
     int i=0,j=0;
      while(k!=0)
      {
        ans.push_back(b[j]);
        ans.push_back(a[i]);
        i++;
        j++;
        k--;
      }
      return ans;
    }
};