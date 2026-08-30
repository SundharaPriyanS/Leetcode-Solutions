class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_set<int> newnum,inval;
        for (int i = 0; i < nums.size();){
            if (newnum.count(nums[i]))
                inval.insert(nums[i]);
            else
                newnum.insert(nums[i]);
            int j=i;
            while (j<nums.size() && nums[j]==nums[i])
                j++;
            i=j;
        }
        return newnum.size()-inval.size();
    }
};