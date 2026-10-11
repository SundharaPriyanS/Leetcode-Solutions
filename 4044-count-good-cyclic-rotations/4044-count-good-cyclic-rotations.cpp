class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int good=0;
        int n=nums.size();
        int h=n/2;
        long long a=accumulate(nums.begin(),nums.begin()+h,0LL);
        long long b=accumulate(nums.begin()+h,nums.end(),0LL);
        for (int i=0;i<n;i++){
            a=a-nums[i]+nums[(i+h)%n];
            b=b-nums[(i+h)%n]+nums[i];
            if (a>b)
                good++;
        }
        return good;
    }
};