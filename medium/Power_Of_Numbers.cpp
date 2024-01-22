class Solution{
    public:
    //You need to complete this fucntion
    int mod=1000000007;
    
   long long power(int N,int R)
    {
       //Your code here
        if(R==0){
            return 0;
        }
        if(R==1){
            return N%mod;
        }
        long long ans = 1;
        long long k = power(N, R/2)%mod;
        if(R%2){
            ans = (ans*N) % mod;
        }
        return (ans*((k*k)%mod)%mod);
    }

};
