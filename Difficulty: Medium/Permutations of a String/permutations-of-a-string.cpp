//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    void rec(int i,string &s,unordered_set<string> &ans){
        if(i>=s.size()){
            ans.insert(s);
            return;
        } 
        for(int j=i;j<s.size();j++){
            swap(s[j],s[i]);
            rec(i+1,s,ans);
            swap(s[j],s[i]);
        }
    }
  public:
    vector<string> findPermutation(string &s) {
        // Code here there
        unordered_set<string> ans;
        rec(0,s,ans);
        vector<string> res(ans.begin(),ans.end());
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends