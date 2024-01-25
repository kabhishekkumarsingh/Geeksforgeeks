class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        //code here
        string s;
        for(int i=0;i<n;i++){
            s.push_back(arr[i]);
        }
        return s;
    }
};
