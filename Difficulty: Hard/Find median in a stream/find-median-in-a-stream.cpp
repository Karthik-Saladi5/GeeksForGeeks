//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<double> ans;
        multiset<int> s;
        auto it=s.begin();
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
            if(i==0) it=s.begin();
            else if(*it>arr[i] && i%2==1) it--;
            else if(*it<=arr[i] && i%2==0) it++;
            if(s.size()%2==0){
                auto nxt=next(it);
                ans.push_back((*it+*nxt)/2.0);
            }else ans.push_back((double)*it);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<double> ans = ob.getMedian(nums);
        cout << fixed << setprecision(1);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends