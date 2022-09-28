class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int initial  =  prices[0];
        
        int maxprice = 0 ;
        for(int i= 1; i<prices.size();i++)
        {
        if (prices[i]<initial)
        {
            initial = prices[i];
        }
        
        
            maxprice = max(maxprice,(prices[i]- initial));
        }
        return maxprice;
    }
};




COMMENT : 
Your input
[7,1,5,3,6,4]
Output
5
Expected
5
