//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.lang.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(in.readLine());

            Solution ob = new Solution();
            ArrayList<ArrayList<Integer>> ans = ob.nQueen(n);
            if (ans.size() == 0)
                System.out.println("-1");
            else {
                for (int i = 0; i < ans.size(); i++) {
                    System.out.print("[");
                    for (int j = 0; j < ans.get(i).size(); j++)
                        System.out.print(ans.get(i).get(j) + " ");
                    System.out.print("] ");
                }
                System.out.println();
            }
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    static boolean possible(int row,int col,int[] board){
        for(int i=0;i<row;i++){
            int pr=i;
            int pc=board[i];
            if(pc==col || Math.abs(pr-row)==Math.abs(pc-col)) return false;
        }
        return true;
    }
    static void recur(int level,int n,int[] board,ArrayList<ArrayList<Integer>> ans){
        if(level==n){
            ArrayList<Integer> temp=new ArrayList<>();
            for(int i:board) temp.add(i+1);
            ans.add(temp);
        }
        for(int j=0;j<n;j++){
            if(possible(level,j,board)){
                board[level]=j;
                recur(level+1,n,board,ans);
                board[level]=-1;
            }
        }
    }
    public ArrayList<ArrayList<Integer>> nQueen(int n) {
        // code here
        ArrayList<ArrayList<Integer>> ans=new ArrayList<>();
        int[] board=new int[n];
        Arrays.fill(board,-1);
        recur(0,n,board,ans);
        return ans;
    }
}