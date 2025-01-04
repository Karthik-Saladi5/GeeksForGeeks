//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.util.*;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String[] arr1Str = sc.nextLine().split(" ");
            int[] arr = Arrays.stream(arr1Str).mapToInt(Integer::parseInt).toArray();
            int target = Integer.parseInt(sc.nextLine());

            Solution ob = new Solution();
            int ans = ob.countTriplets(arr, target);
            System.out.println(ans);
            System.out.println("~");
        }
    }
}
// } Driver Code Ends


class Solution {
    public int countTriplets(int[] arr, int target) {
        // Code Here
        int n=arr.length,c=0;
        for(int i=0;i<n-2;i++){
            int left=i+1,right=n-1;
            while(left<right){
                int s=arr[i]+arr[left]+arr[right];
                if(s<target) left++;
                else if(s>target) right--;
                else{
                    int a=arr[left];
                    int b=arr[right];
                    int c1=0,c2=0;
                    while(left<=right && arr[left]==a){
                        c1++;
                        left++;
                    } 
                    while(left<=right && arr[right]==b){
                        c2++;
                        right--;
                    } 
                    if(a==b) c+=c1*(c1-1)/2;
                    else c+=c1*c2;
                }
            }
        }
        return c;
    }
}