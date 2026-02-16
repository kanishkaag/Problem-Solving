class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int mini = INT_MAX;
        // int maxi = INT_MIN;
        // int idx = 0;
        // int n = prices.size();
        // for(int i = 0; i<prices.size();i++){
        //     if(prices[i] < mini){
        //         mini = prices[i];
        //         idx = i;
        //     }
        //     if(idx == n-1){

        //     }   
        // }
        // for(int j = idx; j < prices.size(); j++){
        //     if(prices[j] > maxi){
        //         maxi = prices[j];
        //     }
        // }
        // return maxi - mini;

        int mini = INT_MAX;
        int profit = 0;
        int maxi = 0;
    
        for(int i = 0;i < prices.size(); i++){
            mini = min(prices[i],mini);
            profit = prices[i] - mini;
            maxi = max(profit,maxi);
        }
       
        return maxi;
    }
};