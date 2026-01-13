class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // code here
        int f=0,t=0;
        int n=arr.size();
        for(auto i:arr){
            if(i==5) f++;
            else if(i==10){
                if(f>0) f--;
                else return 0;
                t++;
            }else{
                if(t>0 && f>0){
                    f--;
                    t--;
                }else if(f>2){
                    f-=3;
                }else return 0;
            }
        }
        return 1;
    }
};