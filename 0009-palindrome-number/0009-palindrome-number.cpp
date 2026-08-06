class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
            return false;
        long t=x,l=0;
        while (t>0){
            l=l*10+t%10;
            t/=10;
        }
        if (x==l)
            return true;
        return false;
    }
};