class Solution {
    int solve(vector<int> &arr,int s){
        int c=0;
        for(int i:arr) {
            c+=(int)i/s;
            c+=(int)(i%s!=0);
        }
        return c;
    }
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        
        int ans=INT_MIN;
        for(auto i:arr) ans=max(i,ans);
        int low=1, high=ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(solve(arr,mid)>k){
                low=mid+1;
            }else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};