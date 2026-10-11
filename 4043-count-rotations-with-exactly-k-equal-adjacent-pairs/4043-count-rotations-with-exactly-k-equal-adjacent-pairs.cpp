class Solution {
public:
    int count(string s){
        int c=0;
        for (int i=0;i<s.size()-1;i++)
            if (s[i]==s[i+1])
                c++;
        return c;
    }
    int countRotations(string s, int k) {
        int l=s.length();
        int ok=0;
        for (int i=0;i<l;i++){
            int a=count(s);
            if (a==k)
                ok++;
            rotate(s.begin(),s.begin()+1,s.end());
        }
        return ok;
    }
};