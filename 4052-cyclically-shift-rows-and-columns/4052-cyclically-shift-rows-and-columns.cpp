class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>> res(n,vector<int>(n));
        for (int i=0;i<n;++i){
            for (int j=0;j<n;++j){
                int newc=(j-rowShift[i]+n)%n;
                int newr=(i-colShift[newc]+n)%n;
                res[newr][newc]=grid[i][j];
            }
        }
        return res;
    }
};