class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        vector<int> ans;
        int i=0,j=0;
        unordered_map<int,int> freq;
        while(j<n){
            freq[arr[j]]++;
            while(i<n && (j-i+1>k)){
                freq[arr[i]]--;
                if(freq[arr[i]]==0) freq.erase(arr[i]);
                i++;
            }
            if(j-i+1==k) ans.push_back(freq.size());
            j++;
        }
        return ans;
    }
};