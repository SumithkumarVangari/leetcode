class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        vector<int> ans;
        vector<int> check;

        unordered_map<int,int> mp;

        int n = arr2.size();

        for(int i = 0; i < arr1.size(); i++)
        {
            mp[arr1[i]]++;
        }

        for(int i = 0; i < n; i++)
        {
            while(mp[arr2[i]] != 0)
            {
                ans.push_back(arr2[i]);
                mp[arr2[i]]--;
            }
        }

        for(int i = 0; i < arr1.size(); i++)
        {
            if(find(arr2.begin(), arr2.end(), arr1[i]) == arr2.end())
            {
                check.push_back(arr1[i]);
            }
        }

        sort(check.begin(), check.end());

        for(int x : check)
        {
            ans.push_back(x);
        }

        return ans;
    }
};