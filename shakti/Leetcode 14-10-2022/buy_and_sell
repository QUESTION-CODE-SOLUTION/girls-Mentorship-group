class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof=0;
       int min_price=prices[0];
      
        for(int i=1; i<prices.size(); i++){
            if(prices[i]>min_price)
            maxprof= max(prices[i]-min_price,maxprof);
                else 
                    min_price=prices[i];
    }
      return maxprof; 
    }
     
};
