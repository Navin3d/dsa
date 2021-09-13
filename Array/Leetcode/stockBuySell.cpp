//Leetcode 121
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minValue = INT_MAX;
            
            for(int i=0; i<prices.size() ; i++){
                profit = max(profit, prices[i] - minValue );
                minValue = min(minValue, prices[i]);
            }
        
         return profit;
    }
};
