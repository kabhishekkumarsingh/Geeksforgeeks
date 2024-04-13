long long reversedBits(long long x) {
        // code here
          long long ans=0;
        for(int i= 0 ; i<32; i++)
        {
            int bit= (x>>i)&1;
            if(bit)
            {
                ans= ans | (1ll<<(31-i));
            }
        }
        return ans;
    }
