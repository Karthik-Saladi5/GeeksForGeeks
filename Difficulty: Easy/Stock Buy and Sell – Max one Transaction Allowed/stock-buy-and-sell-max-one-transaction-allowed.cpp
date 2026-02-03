class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int mxProfit=INT_MIN;
        int mnPrice=INT_MAX;
        for(auto i:prices){
            mnPrice=min(i,mnPrice);
            mxProfit=max(mxProfit,i-mnPrice);
        }
        return mxProfit;
    }
};
