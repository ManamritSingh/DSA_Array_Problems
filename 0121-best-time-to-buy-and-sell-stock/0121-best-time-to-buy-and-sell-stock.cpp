
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int minPrice = INT_MAX; // Initialize the minimum price to a large value
        // int maxProfit = 0;      // Initialize the maximum profit to 0
        
        // for (int i = 0; i < prices.size(); i++) {
        //     if (prices[i] < minPrice) {
        //         minPrice = prices[i]; // Update the minimum price
        //     } else if (prices[i] - minPrice > maxProfit) {
        //         maxProfit = prices[i] - minPrice; // Update the maximum profit
        //     }
        // }
        
        // return maxProfit;
     int minprice = INT_MAX;
     int maxprofit = 0;

     for(int i =0 ; i < prices.size(); i++){
        if(prices[i]<minprice){
            minprice=prices[i];
        }
        else if((prices[i] - minprice) > maxprofit){
            maxprofit = prices[i] - minprice;
        }
     }
     return maxprofit;
    }
};


// cant be done using bruteforce