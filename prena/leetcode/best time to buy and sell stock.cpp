class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxdiff=0,min=prices[0];
        for (int i=1;i<prices.size();i++){
            if(min<prices[i]){
                maxdiff=max(prices[i]-min,maxdiff);
            }
            else{
                min=prices[i];
            }
        }
        return maxdiff;
    }
};
