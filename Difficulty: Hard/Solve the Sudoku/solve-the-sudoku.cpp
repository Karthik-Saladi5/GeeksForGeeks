//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find a solved Sudoku.
    bool isValid(int &k,vector<vector<int>> &mat,int &row,int &col){
        for(int i=0;i<9;i++){
            if(mat[i][col]==k) return 0;
            if(mat[row][i]==k) return 0;
            if(mat[3*(row/3)+i/3][3*(col/3)+i%3]==k) return 0;
        }
        return 1;
    }
    bool rec(vector<vector<int>> &mat){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(mat[i][j]==0){
                    for(int k=1;k<=9;k++){
                        if(isValid(k,mat,i,j)){
                            mat[i][j]=k;
                            if(rec(mat)) return 1;
                            mat[i][j]=0;
                        }
                    }
                    return 0;
                }
            }
        }
        return 1;
    }
    void solveSudoku(vector<vector<int>> &mat) {
        // code here
        rec(mat);
    }
};

//{ Driver Code Starts.

vector<int> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    int num;
    vector<int> res;
    while (ss >> num) {
        res.push_back(num);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<vector<int>> grid;
        for (int i = 0; i < 9; i++) {
            vector<int> v = inputLine();
            grid.push_back(v);
        }

        Solution ob;

        ob.solveSudoku(grid);

        for (auto v : grid) {
            for (auto elem : v) {
                cout << elem << " ";
            }
            cout << endl;
        }

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends