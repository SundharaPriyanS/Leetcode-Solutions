class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> li;
        set<int> newn(nums.begin(),nums.end());
        int c=lower;
        for (int n:newn){
            if (lower>n)
                continue;
            if (upper<n)
                break;
            if (c<n)
                li.push_back({c,n-1});
            c=n+1;
        }
        if (c<=upper)
                li.push_back({c,upper});
        return li;
    }
};