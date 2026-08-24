class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {
        int i, n = s.size();
        vector<int> pref(n + 1, 0);
        for (i = 0; i < n; i++)
            pref[i+1]=pref[i]+(s[i]=='1');
        int to=pref[n];
        vector<bool> ans;
        for (string t:strs)
                {
                int fo = 0;
                int q = 0;
                for (char c : t) {
                    if (c == '1')
                        fo++;
                    else if (c == '?')
                        q++;
                }
                int need = to - fo;
                if (need < 0 || need > q) {
                    ans.push_back(false);
                    continue;
                }
                int po = 0;
                int ql = q;
                bool ok = true;
                for (i = 0; i < n; i++) {
                    if (t[i] == '1')
                        po++;
                    else if (t[i] == '?')
                        ql--;
                    if (need > ql) {
                        po++;
                        need--;
                    }
                if (po > pref[i + 1]) {
                    ok = false;
                    break;
                }
        }
        ans.push_back(ok && need==0);
    }
    return ans;
    }
};