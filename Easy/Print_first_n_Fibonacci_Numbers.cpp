class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int m) 
    {
        //code here
        vector<long long int>ans;
        long long int a=1,b=1,c=0;
        ans.push_back(a);
        if(m==1) return ans;
        ans.push_back(b);
        if(m==2) return ans;
        for(int i=1;i<m-1;i++){
            c=a+b;
            ans.push_back(c);
            a=b;
            b=c;
        }
        
        return ans;
    }
};
