//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
    int solve(int i,int j,string &s1,string&s2,vector<vector<int>> &dp){
        if(i==s1.size() || j==s2.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]) return dp[i][j]=1+solve(i+1,j+1,s1,s2,dp);
        else return dp[i][j]=max(solve(i+1,j,s1,s2,dp),solve(i,j+1,s1,s2,dp));
    }
  public:
    int longestPalinSubseq(string &s) {
        // code here
        vector<vector<int>> dp(s.size()+1,vector<int>(s.size()+1,-1));
        string rev=s;
        reverse(s.begin(),s.end());
        return solve(0,0,s,rev,dp);
    }
};


//{ Driver Code Starts.

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends