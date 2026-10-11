class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> round;
        vector<int> ans;
        int r=0;
        for (int i=0;i<nums.size();++i){
            if (i>0 && nums[i]==nums[i-1])
                r++;
            else
                r=0;
            if (r>=round.size())
                round.push_back({});
            round[r].push_back(nums[i]);
        }
        ans.reserve(nums.size());
        for (const auto &rou: round){
            ans.insert(ans.end(),rou.begin(),rou.end());
        }
        return ans;
    }
};