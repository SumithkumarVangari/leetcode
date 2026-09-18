class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> freq;
        unordered_map<int,int> first;
        unordered_map<int,int> last;

        for(int i = 0; i < n; i++) {

            int num = nums[i];

            if(first.find(num) == first.end()) {
                first[num] = i;
            }

            freq[num]++;
            last[num] = i;
        }

        int degree = 0;

        for(auto it : freq) {
            degree = max(degree, it.second);
        }

        int ans = n;

        for(auto it : freq) {

            int num = it.first;
            int count = it.second;

            if(count == degree) {

                int len = last[num] - first[num] + 1;
                ans = min(ans, len);
            }
        }

        return ans;
    }
};