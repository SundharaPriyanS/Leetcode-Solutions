class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0,l=s.size()-1;
        while (s[l]==' ')
            l--;
        while (l>=0 && s[l]!=' '){
            l--;
            c++;
        }
        return c;
    }
};