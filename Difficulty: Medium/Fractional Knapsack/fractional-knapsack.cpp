//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// class implemented
struct Item{
    int value;
    int weight;
};

class Solution {
    bool static comp(Item a,Item b){
        double x=(double)a.value/(double) a.weight;
        double y=(double)b.value/(double) b.weight;
        return x>y;
    }
  public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // Your code here
        vector<Item> items;
        double ans=0.0;
        for(int i=0;i<wt.size();i++){
            items.push_back({val[i],wt[i]});
        }
        sort(items.begin(),items.end(),comp);
        for(int i=0;i<items.size();i++){
            if(capacity==0) break;
            if(items[i].weight<=capacity){
                ans+=items[i].value;
                capacity-=items[i].weight;
            }
            else{
                ans+=((double)items[i].value/items[i].weight)*(double)capacity;
                capacity=0;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends