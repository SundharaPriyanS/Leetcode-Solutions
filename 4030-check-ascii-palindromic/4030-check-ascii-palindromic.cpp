class Solution {
public:
    bool isPalindromic(string s) {
        string n="";
        for (char i:s){
            n+=bitset<8>(i).to_string();
        }
        int l=n.length();
        for (int i=0;i<l/2;i++){
            if (n[i]!=n[l-i-1])
                return false;
        }
        return true;
    }
};