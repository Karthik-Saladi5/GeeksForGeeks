//{ Driver Code Starts
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine(); // consume the remaining newline

        for (int k = 0; k < t; k++) {
            List<Integer> arr1 = new ArrayList<>();
            String input = sc.nextLine();
            Scanner lineScanner = new Scanner(input);
            while (lineScanner.hasNextInt()) {
                arr1.add(lineScanner.nextInt());
            }
            lineScanner.close();

            List<Integer> arr2 = new ArrayList<>();
            input = sc.nextLine();
            lineScanner = new Scanner(input);
            while (lineScanner.hasNextInt()) {
                arr2.add(lineScanner.nextInt());
            }
            lineScanner.close();

            Solution ob = new Solution();
            int ans = ob.maxPathSum(arr1, arr2);
            System.out.println(ans);
        }

        sc.close();
    }
}

// } Driver Code Ends



class Solution {
    public int maxPathSum(List<Integer> arr1, List<Integer> arr2) {
        // code here
        int i = 0;
    int j = 0;
    int total = 0;
    int sumA = 0;
    int sumB = 0;
    int n = arr1.size();
    int m = arr2.size();
    
    while (i < n && j < m) {
        if (arr1.get(i).equals(arr2.get(j))) {
            total += Math.max(sumA, sumB) + arr1.get(i);
            sumA = 0;
            sumB = 0;
            i++;
            j++;
        } else if (arr1.get(i) > arr2.get(j)) {
            sumB += arr2.get(j);
            j++;
        } else {
            sumA += arr1.get(i);
            i++;
        }
    }
    
    while (i < n) {
        sumA += arr1.get(i);
        i++;
    }
    
    while (j < m) {
        sumB += arr2.get(j);
        j++;
    }
    
    return total + Math.max(sumA, sumB);
    }
}