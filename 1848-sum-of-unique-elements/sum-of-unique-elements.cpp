class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n =nums.size(),sum=0;
        unordered_map<int,int>mp;
        for(int x : nums)
        {
            mp[x]++;
        }
        for(auto x : mp)
        {
            if(x.second==1)sum+=x.first;
        }
       return sum;
    }
};