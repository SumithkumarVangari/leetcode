class Solution {
public:
    bool judgeSquareSum(int c) {
      vector<long long>ans;
      long long i=0;
      while(i*i<=c)
      {
        ans.push_back(i*i);
        i++;
      }
      int left=0,right=ans.size()-1;
      while(left<=right)
      {
        long long sum=ans[left]+ans[right];
        if(sum==c)return true;
        else if(sum<c) left++;
        else right--;
      }
      return false;
    }
};