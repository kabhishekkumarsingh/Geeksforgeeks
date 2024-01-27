class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        // Your code here
        long count=0;
        for(int i=0;i<a.length();i++){
            if(a[i]=='1') count++;
        }
        return count*(count-1)/2;
    }

};
