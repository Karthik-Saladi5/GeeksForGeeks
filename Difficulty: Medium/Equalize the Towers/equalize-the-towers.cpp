class Solution {
    int calc(vector<int>& heights, vector<int> &cost,int req){
        int s=0;
        for(int i=0;i<cost.size();i++){
            s+=abs(req-heights[i])*cost[i];
        }
        return s;
    }
  public:
    int minCost(vector<int>& heights, vector<int>& cost) {
        // code here
        int low=0;
        int high=INT_MIN;
        for(auto i:heights){
            // low=min(low,i);
            high=max(high,i);
        }
        int ans=INT_MAX;
        while(low<=high){
            int mid=(high-low)/2+low;
            int cur=calc(heights,cost,mid);
            int left=calc(heights,cost,mid-1);
            int right=calc(heights,cost,mid+1);
            if(cur>left) high=mid-1;
            else low=mid+1;
            ans=min(ans,cur);
        }
        return ans;
    }
};
