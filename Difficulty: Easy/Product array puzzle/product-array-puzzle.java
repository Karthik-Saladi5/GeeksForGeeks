//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            int[] array = new int[n];
            for (int i = 0; i < n; i++) {
                array[i] = sc.nextInt();
            }
            Solution ob = new Solution();
            long[] ans = new long[n];
            ans = ob.productExceptSelf(array);

            for (int i = 0; i < n; i++) {
                System.out.print(ans[i] + " ");
            }
            System.out.println();
            t--;
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    public static long[] productExceptSelf(int nums[]) {
        // code here
        long ans[]=new long[nums.length];
        long prod=1,c=0;
        for(int i:nums){
            if(i==0)c++;
            else prod*=i;
        } 
        if(c>1) Arrays.fill(ans,0);
        else{
            for(int i=0;i<nums.length;i++){
                if(c==1){
                    if(nums[i]==0) ans[i]=prod;
                    else ans[i]=0;
                }
                else ans[i]=prod/nums[i];
            } 
            
        }
        return ans;
    }
}
