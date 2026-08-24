class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        double res=0;
        int l=discounts.size()-1;
        for (int i=prices.size()-1;i>=0;i--){
            if (l>=0)
                res+=(prices[i]*(100-discounts[l--])/100.0);
            else
                res+=prices[i];
        }
        return res;
    }
};