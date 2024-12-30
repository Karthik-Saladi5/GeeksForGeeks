//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

    // Function to find the trapped water between the blocks.
  public:
    int trappingWater(vector<int> &height) {
        // code here
        int i=0,j=height.size()-1,s=0;
        int l=height[i];
        int r=height[j];
        while(i<j){
            if(height[i]<height[j]){
                i++;
                if(height[i]>l) l=height[i];
                s+=l-height[i];
            }
            else{
                j--;
                if(height[j]>r) r=height[j];
                s+=r-height[j];
            }
        }
        return s;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.trappingWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends