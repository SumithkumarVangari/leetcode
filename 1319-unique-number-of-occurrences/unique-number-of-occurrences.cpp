class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size(),j=1;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        vector<int>ans;
      for(auto it:mp)
      {
        ans.push_back(it.second);
      }
      sort(ans.begin(),ans.end());
      int k=mp.size();
      for(int i=0;i<k-1;i++)
      {
        if(ans[i]==ans[j]) return false;
        j++;
      }
      return true;
    }
};