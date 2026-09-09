class Solution {
public:
    long long countCommas(long long n) {
        long long num = n;
        long long m, ans;
        long long p = 1;
        long long q = 1;
        long long digit = 0;
        while (num > 0) {
            digit++;
            num = num / 10;
        }
        if (digit <= 3)
            return 0;
        m = (digit - 1) / 3;
        for (int a = 1; a <= 3 * m; a++) {
            p *= 10;
        }

        ans = (n - p + 1) * m;
        for (int k = m - 1; k >= 1; k--) {
            q = 1;
            for (int a = 1; a <= 3 * k; a++) {
                q *= 10;
            }
            ans += (p - q) * k;
            p = q;
        }
        return ans;
    }
};
