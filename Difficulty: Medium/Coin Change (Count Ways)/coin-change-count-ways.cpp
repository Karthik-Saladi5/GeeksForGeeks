//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    int solve(int i,int s,vector<int> &coins,vector<vector<int>> &dp){
        if(s==0) return dp[i][s]=1;
        if(i>=coins.size()) return 0;
        if(dp[i][s]!=-1) return dp[i][s];
        int pick=0;
        if(s>=coins[i]) pick=solve(i,s-coins[i],coins,dp);
        int notPick=solve(i+1,s,coins,dp);
        return dp[i][s]=pick+notPick;
    }
  public:
    int count(vector<int>& coins, int sum) {
        // code here.
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        return solve(0,sum,coins,dp);
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();
        Solution ob;
        cout << ob.count(arr, sum) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends