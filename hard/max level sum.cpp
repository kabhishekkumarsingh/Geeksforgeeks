 public:
    bool isPossible(vector<int>&a, int mid,int n){
        
        int count=0;
        
        for(int i=0;i<a.size();i++){
            //cout<<"hello";
            int cur_rank=a[i];
            
            int ans=1;
             
            while(  (cur_rank * ans *(ans+1)/2) <=  mid){
                ans++;
            }
            ans--;
            
            count+=ans;
            if(count>=n){
                return true;
            }
        }
        if(count>=n){
            return true;
        }
        else return false;
        
        
    }
    int findMinTime(int n, vector<int>&a, int size){
        //write your code here
        int l=0;
        int r=0;
        sort(a.begin(),a.end());
        int i=a[0];
        r=i*(n*(n+1))/2;
        
        int mid=l+(r-l)/2;
        
        int ans=-1;
        while(l<=r){
            
            if(isPossible(a,mid,n)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
            mid=l+(r-l)/2;
        }
        
        return ans;
        
    }
