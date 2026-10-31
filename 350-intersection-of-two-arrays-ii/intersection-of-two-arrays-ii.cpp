class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        unordered_map<int,int>st;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
          for(int i=0;i<nums2.size();i++)
        {
            st[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(mp.find(nums1[i])!=mp.end() && st.find(nums1[i])!=st.end())
            {
                ans.push_back(nums1[i]);
                mp[nums1[i]]--;
                st[nums1[i]]--;
                if(mp[nums1[i]]==0) mp.erase(nums1[i]);
                if(st[nums1[i]]==0) st.erase(nums1[i]);
            }
        }
        return ans;
    }
};