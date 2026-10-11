class Solution {
public:
    int minRotations(string s) {
        int st=0,c=0;
        for (char a:s){
            int t=abs(st-(a-'0'));
            st=a-'0';
            c+=(min(t,10-t));
        }
        return c;
    }
};