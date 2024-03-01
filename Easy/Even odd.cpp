//{ Driver Code Starts
//Initial Template for javascript
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let x = parseInt(readLine());
        let obj = new Solution();
        if(obj.checkOddEven(x)){
            console.log("Even");
        }
        else{
            console.log("Odd");
        }
        
    }
}
// } Driver Code Ends


//User function Template for javascript
/**
 * @param {number} x
 * @returns {void}
*/

class Solution {
    //Function to check whether the number is odd or even.
    checkOddEven(x)
    {
        if(x % 2 == 0){
            // Complete the statement below
            return true;
        }
        else{
            // Complete the statement below
            return false;
        }
    }
}
