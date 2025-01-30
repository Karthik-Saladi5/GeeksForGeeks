//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    void rec(int col,int n,vector<int> &cur, vector<vector<int>> &ans){
        if(col==n){
            ans.push_back(cur);
            return;
        }
        for(int i=0;i<n;i++){
            if(isValid(cur,col,i)){
                cur[col]=i+1;
                rec(col+1,n,cur,ans);
            }
        }
    }
    bool isValid(vector<int>& board, int col, int row) {
        for (int i = 0; i < col; i++) {
            int placedRow = board[i] - 1;
            if (placedRow == row || abs(placedRow - row) == abs(i - col)) {
                return false;
            }
        }
        return true;
    }
  public:
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<int> cur(n,0);
        vector<vector<int>> ans;
        rec(0,n,cur,ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if (ans.size() == 0)
            cout << -1 << "\n";
        else {
            sort(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++) {
                cout << "[";
                for (int u : ans[i])
                    cout << u << " ";
                cout << "] ";
            }
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends