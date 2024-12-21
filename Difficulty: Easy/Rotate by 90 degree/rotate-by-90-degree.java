//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int matrix[][] = new int[n][n];
            // String st[] = read.readLine().trim().split("\\s+");
            int k = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) matrix[i][j] = sc.nextInt();
            }
            Solution ob = new Solution();
            ob.rotateby90(matrix);
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) System.out.print(matrix[i][j] + " ");
                System.out.println();
            }
            System.out.println("~");
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    // Function to rotate matrix anticlockwise by 90 degrees.
     static void rotateby90(int mat[][]) {
        int end=mat.length-1;
        for(int i=0;i<mat.length;i++){
            for(int j=0;j<=end;j++){
                int temp=mat[i][j];
                mat[i][j]=mat[i][end];
                mat[i][end]=temp;
                end--;
            }
            end=mat.length-1;
        }
        int ans=0;
        for(int i=0;i<mat.length;i++){
            for(int j=i;j<mat.length && ans<mat.length; j++){
                int temp=mat[i][j];
                mat[i][j]=mat[ans][i];
                mat[ans][i]=temp;
                ans++;
            }
            ans=i;
            ans++;
        }
    }

}