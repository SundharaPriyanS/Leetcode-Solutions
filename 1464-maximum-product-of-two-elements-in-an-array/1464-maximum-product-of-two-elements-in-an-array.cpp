class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a=0,b=0,ai,bi,i;
        for (i=0;i<nums.size();i++){
            if (a<nums[i]){
                a=nums[i];
                ai=i;
            }
        }
        for (i=0;i<nums.size();i++){
            if (b<nums[i] && ai!=i){
                b=nums[i];
                bi=i;
            }
        }
        return (nums[ai]-1)*(nums[bi]-1);
    }
};