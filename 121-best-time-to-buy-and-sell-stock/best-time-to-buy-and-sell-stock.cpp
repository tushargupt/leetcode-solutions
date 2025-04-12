class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = INT_MIN;
        int sPrice = INT_MAX;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<sPrice)
                sPrice = prices[i];
            mp = max(mp, prices[i]-sPrice);
        }
        return mp;
    }
};