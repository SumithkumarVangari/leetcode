class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        long long sum = 0;
        long long curr = 0, maxi = 0;

        int n = arr.size();

        for (int x : arr)
            sum += x;

        // Kadane on two copies
        for (int i = 0; i < 2 * n; i++) {
            curr += arr[i % n];

            maxi = max(maxi, curr);

            if (curr < 0)
                curr = 0;
        }

        if (k == 1) {
            curr = 0;
            maxi = 0;

            for (int x : arr) {
                curr += x;
                maxi = max(maxi, curr);
                if (curr < 0) curr = 0;
            }
        }
        else if (sum > 0) {
            maxi += (k - 2) * sum;
        }

        return maxi % 1000000007;
    }
};