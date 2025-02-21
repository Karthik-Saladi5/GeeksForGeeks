//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> st;
        for (auto i : s) {
            if ((i == ')' && (st.empty() || st.top() != '(')) ||
                (i == '}' && (st.empty() || st.top() != '{')) ||
                (i == ']' && (st.empty() || st.top() != '['))) {
                return false;
            }
            else if (i == '(' || i == '{' || i == '[') {
                st.push(i);
            }
            else if (i == ')' || i == '}' || i == ']') {
                st.pop();
            }
        }
        return st.empty();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends