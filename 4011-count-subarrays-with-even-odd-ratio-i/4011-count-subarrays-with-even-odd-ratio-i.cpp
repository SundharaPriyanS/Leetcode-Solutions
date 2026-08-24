class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int i, j, c = 0, l = nums.size();
        for (i = 0; i < l; i++) {
            int o = 0, e = 0;
            for (j = i; j < l; j++) {
                if (nums[j] % 2 == 0)
                    e++;
                else
                    o++;
                if (o > 0 && e * b <= a * o)
                    c++;
            }
        }
        return c;
    }
};