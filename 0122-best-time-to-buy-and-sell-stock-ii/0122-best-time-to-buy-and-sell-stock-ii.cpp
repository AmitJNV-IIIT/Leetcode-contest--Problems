class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0,n=prices.size();
        for(int i=1;i<n;i++){
            if(prices[i-1]<prices[i])
            p+=prices[i]-prices[i-1];
        }return p;
    }
};