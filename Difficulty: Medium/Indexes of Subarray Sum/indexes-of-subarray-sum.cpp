class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int s=0;
        int i=0;
        for(int j=0;j<arr.size();j++){
            s+=arr[j];
            while(s>target && i<=j){
                s-=arr[i];
                i++;
            }
            if(s==target) return {i+1,j+1};
        }
        return {-1};
    }
};