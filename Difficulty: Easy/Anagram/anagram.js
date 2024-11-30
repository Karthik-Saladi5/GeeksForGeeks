//{ Driver Code Starts
// Initial Template for javascript
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString =
        inputString.trim().split('\n').map(string => { return string.trim(); });

    main();
});

function readLine() { return inputString[currentLine++]; }

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {
        let a = readLine().trim();
        let b = readLine().trim();
        let obj = new Solution();
        if (obj.areAnagrams(a, b))
            console.log("true");
        else
            console.log("false");
        console.log("~");
    }
}

// } Driver Code Ends


// User function Template for javascript

/**
 * @param {string} a
 * @param {string} b
 * @returns {boolean}
 */

class Solution {
    // Function is to check whether two strings are anagram of each other or not.
    areAnagrams(s1, s2) {
        // code here
        s1=s1.split('').sort().join();
        s2=s2.split('').sort().join();
        // s2.sort();
        return s1==s2;
    }
}