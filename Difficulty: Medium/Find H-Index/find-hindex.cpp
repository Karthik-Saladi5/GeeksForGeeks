class Solution {
  public:
     bool check(int H , vector<int> &citations){
        int cnt = 0;
        for(int x : citations)
            cnt += (x >= H);
        return (cnt >= H);
    }
  
    int hIndex(vector<int>& citations) {
        int s = 0 , e = citations.size() , ans = 0;
        while(s <= e){
            int m = (s + e) >> 1;
            if(check(m , citations))
                ans = m , s = m + 1;
            else
                e = m - 1;
        }
        return ans;
    }
};