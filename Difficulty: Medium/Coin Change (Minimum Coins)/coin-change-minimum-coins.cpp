//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    int solve(int i,vector<int> &coins,int sum,vector<vector<int>> &dp){
        if(sum==0) return dp[i][sum]=0;
        if(i>=coins.size()) return dp[i][sum]=1e5;
        if(dp[i][sum]!=-1) return dp[i][sum];
        int pick=1e5;
        if(coins[i]<=sum) pick=1+solve(i,coins,sum-coins[i],dp);
        return dp[i][sum]=min(pick,solve(i+1,coins,sum,dp));
    }
  public:
    int minCoins(vector<int> &coins, int sum) {
        // code here
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        int ans=solve(0,coins,sum,dp);
        return ans==1e5 ? -1:ans;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minCoins(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends