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
        let input_line = readLine().split(' ');
        let str = input_line[0];
        let obj = new Solution();
        obj.stringJumper(str);
    }
}
// } Driver Code Ends


//User function Template for javascript
/**
 * @param {string} str
 * @returns {void}
*/

class Solution {
    //Function to skip characters and print the remaining characters.
    stringJumper(str) {
        let s="";
        for (let i = 0; i < str.length; i += 2) {
            //console.log(str[i]+' ');
            s+=str[i];
        }
        console.log(s);
    }
}
