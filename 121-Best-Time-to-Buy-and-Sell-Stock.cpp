class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=prices[0],c=0;

        for(int i =0;i<prices.size();i++){
            if(prices[i]<a){
                a =prices[i];
            }
            else{
                c=max(prices[i]-a,c);
            }

        }
        return c;
    }
};