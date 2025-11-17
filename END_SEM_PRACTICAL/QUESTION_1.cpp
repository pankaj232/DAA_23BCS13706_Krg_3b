class Solution {
public:
    int monkeyMove(int n) {
        const long long MOD = 1'000'000'007;
        
        long long pow2 = 1, base = 2;
        long long exp = n;

        while (exp > 0) {
            if (exp & 1) 
                pow2 = (pow2 * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }

        long long ans = (pow2 - 2 + MOD) % MOD;

        return ans;
    }
};
