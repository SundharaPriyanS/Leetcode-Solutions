class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a = INT_MIN, b = INT_MIN, c = INT_MIN, l = nums.size();
        int am = INT_MAX, bm = INT_MAX;
        for (int i = 0; i < l; i++) {
            int t = nums[i];
            if (t > a) {
                c = b;
                b = a;
                a = t;
            } else if (t > b) {
                c = b;
                b = t;
            } else if (t > c) {
                c = t;
            }
            if (t < am) {
                bm = am;
                am = t;
            } else if (t < bm)
                bm = t;
        }
        return max(a*b*c,a*am*bm);
    }
};