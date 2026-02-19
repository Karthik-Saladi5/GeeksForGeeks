class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        vector<int> freq(high-low+1,0);
        for(int i:arr)if(i>=low && i<=high) freq[i-low]++;
        vector<int> ans;
        for(int i=0;i<=high-low;i++){
            if(freq[i]==0)ans.push_back(low+i);
        }
        return ans;
    }
};