class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int cnt = 0;

        for (int x : nums) {
            int need = k - x;

            if (mp[need] > 0) {
                cnt++;
                mp[need]--;
            }
            else {
                mp[x]++;
            }
        }

        return cnt;
    }
};