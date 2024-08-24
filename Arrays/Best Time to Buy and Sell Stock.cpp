class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int b = INT_MAX;   
    int c=0;
    int m=0;
        for(int i = 0; i< prices.size(); i++){
            if(c < (prices[i]-b)){
                c = prices[i] - b;
            }
            if(c > m){
                m = c;
            }
            if(b > prices[i]){
                b = prices[i];
            }

        }
        return m;
        
    }
};