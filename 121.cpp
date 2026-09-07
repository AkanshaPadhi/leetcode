class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n=prices.size();
        vector<int> mx(n);
        vector<int> min(n);
       int mini=prices[0];
       int maxi=prices[prices.size()-1];
       int profit=0;

       for(int i=0;i<prices.size();i++){
        if(prices[i]<mini)
        mini=prices[i];
        min[i]=mini;
       }

       for(int j=prices.size()-1;j>=0;j--){
        if(prices[j]>maxi)
        maxi=prices[j];
        mx[j]=maxi;
       }

    for(int a=0;a<prices.size();a++){
    profit=max((mx[a]-min[a]),profit);
    }
    
    return profit; 
    }
};
