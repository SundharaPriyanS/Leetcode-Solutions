class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int l = nums.size(), i, j;
        long long max = -1, maxl = -1;
        for (int i = 0; i < l; i++) {
            for (j = 0; j < l; j++) {
                if (i == j)
                    continue;
                long long m, n = gcd(nums[i],nums[j]);
                m = (1LL *nums[i] * nums[j]) / (n*n);
                if (m > max) {
                    max = m;
                }
            }
        }
        return max;
    }
};