class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int l = prices.size();
        for(int i =0; i<l-1; i++){
            if(prices[i]<prices[i+1]){
                profit+=(prices[i+1]-prices[i]);
            }
        }
        return profit;
    }
};