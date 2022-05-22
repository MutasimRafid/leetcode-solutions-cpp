class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //think about profit from normal order
        //TC: O(n) SC: O(1)
        int maxPro = 0; //maximum profit
        int minPrice = INT_MAX; //minimum price
        int currPro = 0; //current profit
        
        for(int i = 0;i<prices.size();i++){
            minPrice = min(minPrice,prices[i]);
            currPro = prices[i]-minPrice;
            maxPro = max(maxPro,currPro);
        }
        return maxPro;
        
    }
};