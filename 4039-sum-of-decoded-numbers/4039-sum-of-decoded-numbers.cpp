class Solution {
public:
    int sumDecoded(vector<long long>& nums) {
        long long c=0;
        long long t=1e9+7;
        for (int i=0;i<nums.size();i++){
            int w=nums[i]%10;
            long long f=nums[i]/10;
            string s=to_string(f);
            if (w<=0 || w>s.length())
                continue;
            long long a=stoll(s.substr(0,w))%t;
            long long b=stoll(s.substr(w));
            long long ne=1;
            while (b>0){
                if (b%2)
                    ne=(ne*a)%t;
                a=(a*a)%t;
                b/=2;
            }
            c=(c+ne)%t;
        }
        return c%t;
    }
};