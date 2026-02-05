class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int j = 0;
        int cur = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(arr[i] == 0)cur ++;
            if(cur > k){
                while(arr[j] != 0) j ++;
                j++;
                cur--;
            }
            ans = max(ans,i-j+1);
        }
        ans = max(ans,n-j);
        return ans;
    }
};
