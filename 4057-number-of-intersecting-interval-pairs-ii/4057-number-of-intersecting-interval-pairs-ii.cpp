class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        long long n=intervals.size();
        vector<int> ends;
        ends.reserve(n);
        for (const auto& lol:intervals)
            ends.push_back(lol[1]);
        sort(ends.begin(),ends.end());
        long long ni=0;
        for (const auto& lol:intervals){
            int start=lol[0];
            auto it=lower_bound(ends.begin(),ends.end(),start);
            ni+=distance(ends.begin(),it);
        }
        n=n*(n-1)/2;
        return n-ni;
    }
};