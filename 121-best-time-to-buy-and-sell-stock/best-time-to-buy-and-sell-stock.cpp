class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> result;
        if(prices.size()<=1){
            return 0;
        }else{
            int min_price=prices[0];
            int todays_price;
            int profit;
            for(int i=0; i<prices.size(); i++){
                todays_price=prices[i];
                if(todays_price<min_price){
                    min_price=todays_price;
                }
                result.push_back(todays_price-min_price);
            }
            auto it=max_element(result.begin(), result.end());
            int max=*it;
            return max;
        }
    }
};