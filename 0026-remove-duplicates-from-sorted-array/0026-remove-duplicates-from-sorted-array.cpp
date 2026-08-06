class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=nums.size(),i=0;
        for (int j=1;j<l;j++){
            if (nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};