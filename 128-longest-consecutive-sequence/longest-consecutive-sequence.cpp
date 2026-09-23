class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        int n = nums.size();

        if(n == 0)
            return 0;

        for(int i = 0; i < n; i++)
        {
            st.insert(nums[i]);
        }

        int maxi = 1;

        for(auto it : st)
        {
            
            if(st.find(it - 1) == st.end())
            {
                int k = it;
                int cnt = 1;

                while(st.find(k + 1) != st.end())
                {
                    cnt++;
                    k++;
                }

                maxi = max(maxi, cnt);
            }
        }

        return maxi;
    }
};