class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxProfit = 0;
        for(int i = 0; i< prices.size(); i++){
            int profit = prices[i] - mini;
            mini = min(mini, prices[i]);
            maxProfit = max(profit, maxProfit);
        }
        return maxProfit;
    }
};