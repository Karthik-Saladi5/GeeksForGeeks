//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string decodedString(string &s) {
        // code here
        stack<int>st;   // k Stack
        stack<string>nums;  // String stack
        string decoded="";
        int k=0;
        
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            
            if(isdigit(ch)){
                k=k*10+(ch-'0');
            }else if(ch=='['){
                st.push(k);
                nums.push(decoded);
                decoded="";
                k=0;
            }else if(ch==']'){ 
                int x =st.top();  // x= repeatTimes
                st.pop();
                
                string y=nums.top();  // y=decode
                nums.pop();
                
                for(int j=0;j<x;j++){
                    y+=decoded;
                }
                decoded=y;
            }else{
                decoded+=ch;
            }
        }
        return decoded;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.decodedString(s) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends