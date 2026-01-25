class Solution {
    int solve(int i, int l ,int r, int n){
        if(n==i){
            if(l>r) return 1;
            else return 0;
        }
        if(l>n/2) return 0;
        if(r>l) return 0;
        return solve(i+1,l+1,r,n)+solve(i+1,l,r+1,n);
    }
  public:
    int findWays(int n) {
        // code here
        if(n%2==1) return 0;
        return solve(0,0,0,n);
    }
};