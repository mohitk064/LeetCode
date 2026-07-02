class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0, profit = 0;;
        for(int i = 0; i < prices.size(); i++){
            profit = prices[i] - minPrice;
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(profit, maxProfit);
        }
        return maxProfit;
    }
};