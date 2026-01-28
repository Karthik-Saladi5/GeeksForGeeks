class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int minNum = INT_MAX;
        int pos=0;
        for(int i=0;i<n;i++){
            if(arr[i]<minNum){
               minNum=arr[i];
               pos=i;
            }
        }
        return pos;
    }
};
