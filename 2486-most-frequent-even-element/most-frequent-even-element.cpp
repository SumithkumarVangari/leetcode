class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size(),maxi=-1,ans=-1;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it : mp)
        {
              if(it.first %2==0)
              {
                if(it.second>maxi)
                {
                    maxi=it.second;
                    ans=it.first;
                }
                 else if(it.second==maxi && it.first<ans) ans=it.first;
              }
            
        }
        return ans;
    }
};