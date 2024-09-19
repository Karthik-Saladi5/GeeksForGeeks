//{ Driver Code Starts
import java.io.*;
import java.lang.*;
import java.util.*;

class GFG {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            String s = sc.next();
            Solution obj = new Solution();
            System.out.println(obj.reverseWords(s));
            t--;
        }
    }
}

// } Driver Code Ends



class Solution {
    // Function to reverse words in a given string.
    String reverseWords(String str) {
        // code here
        String[] words=str.split("\\.");
        Collections.reverse(Arrays.asList(words));
        StringBuilder wordList=new StringBuilder();
        for (String word : words) {
            wordList.append(word + ".");
        }
        return wordList.deleteCharAt(wordList.length() - 1).toString();
    }
}