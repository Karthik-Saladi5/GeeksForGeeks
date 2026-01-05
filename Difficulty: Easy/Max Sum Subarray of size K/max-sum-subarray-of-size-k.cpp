class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n= arr.size();
        int mx=INT_MIN, cur=0, win=0, i=0;
        for(int j=0;j<n;j++){
            cur+=arr[j];
            win++;
            if(win>k){
                cur-=arr[i];
                i++;
                win--;
            }
            mx=max(mx,cur);
        }
        return mx;
    }
};