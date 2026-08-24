class Solution {
public:
    int maximumGap(string skill, string station) {
        int n=skill.length(),m=station.length();
        vector<int>left(n),right(n);
        int si=0;
        for (int i=0;i<n;i++){
            while (si<m && station[si]!=skill[i]){
                si++;
            }
            left[i]=si++;
        }
        si=m-1;
        for (int i=n-1;i>=0;i--){
            while (si>=0 && station[si]!=skill[i]){
                si--;
            }
            right[i]=si--;
        }
        int mg=0;
        for (int i=0;i<n-1;i++){
            mg=max(mg,right[i+1]-left[i]);
        }
        return mg;
    }
};