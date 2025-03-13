//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    int solve(int i,int j,vector<int> &arr,vector<vector<int>> &dp){
        if(i>=arr.size()) return dp[i][j+1]=0;
        if(dp[i][j+1]!=-1) return dp[i][j+1];
        int take=0;
        if(arr[i]>arr[j] || j==-1)  take=1+solve(i+1,i,arr,dp);
        return dp[i][j+1]=max(take,solve(i+1,j,arr,dp));
    }
  public:
    int lis(vector<int>& arr) {
        // code here
        vector<vector<int>> dp(arr.size()+1,vector<int>(arr.size()+1,-1));
        return solve(0,-1,arr,dp);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input

    while (t--) {
        int n;
        vector<int> arr;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            arr.push_back(num);

        Solution obj;
        cout << obj.lis(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends