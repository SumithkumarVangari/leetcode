class Solution {
public:
    double power(double x, long long n) {
        if(n == 0)
            return 1;

        double half = power(x, n / 2);

        if(n % 2 == 0)
            return half * half;
        else
            return half * half * x;
    }

    double myPow(double x, int n) {
        long long k = n;

        if(k < 0)
            return 1 / power(x, -k);

        return power(x, k);
    }
};