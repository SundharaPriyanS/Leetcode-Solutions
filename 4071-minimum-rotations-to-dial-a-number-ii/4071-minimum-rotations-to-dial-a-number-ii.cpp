class Solution {
public:
    int dist(int a,int b){
        int d=abs(a-b);
        return min(d,10-d);
    }
    int minRotations(int n, string s) {
        vector<int> pre(n);
        pre[0]=dist(0,s[0]-'0');
        for (int i=1;i<n;i++)
            pre[i]=pre[i-1]+dist(s[i-1]-'0',s[i]-'0');
        int ans=pre[n-1];
        vector<int> rev(n,0);
        for (int i=n-2;i>=0;i--)
            rev[i]=rev[i+1]+dist(s[i+1]-'0',s[i]-'0');
        for (int k=1;k<n;k++){
            int cost=pre[k-1];
            cost+=dist(s[k-1]-'0',s[n-1]-'0');
            cost+=rev[k];
            ans=min(ans,cost);
        }
        int wholeReverse=dist(0,s[n-1]-'0')+rev[0];
        ans=min(ans,wholeReverse);
        return ans;
    }
};