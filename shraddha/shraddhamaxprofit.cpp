 int maxProfit(vector<int>& prices) {
        int initial=prices[0];
        int profit=0;
        for(int i=1; i<prices.size();i++)
        {
            if(prices[i]<initial)
            {
                initial =prices[i];
            }
            profit= max(profit,(prices[i]-initial));
        }
        return profit;
    }
