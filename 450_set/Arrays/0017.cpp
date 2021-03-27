class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini=INT_MAX;
        int res=0;
        for(int i=0;i<prices.size();i++)
        {
            if(mini>prices[i])
                mini=prices[i];
            
            res=max(res,prices[i]-mini);
        }
        
        return res;
        
    }
};