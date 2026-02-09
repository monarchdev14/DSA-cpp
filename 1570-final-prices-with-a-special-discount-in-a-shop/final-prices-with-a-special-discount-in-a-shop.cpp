class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;
        vector<int>result;
        result=prices;
        for(int i=0; i<prices.size(); i++){
            while(!s.empty() && prices[s.top()]>=prices[i]){
                int prevPrice=s.top();
                s.pop();
                result[prevPrice]=prices[prevPrice]-prices[i];
            }
            s.push(i);
        }
        return result;
    }
};