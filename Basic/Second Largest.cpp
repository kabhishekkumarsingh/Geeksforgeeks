class Solution{
public:	

	int print2largest(int arr[], int n) {
	 int max=arr[0];
	 int privious=0;
	
	  for(int i=0;i<n;i++){
	      if(arr[i]>max) max=arr[i];
	    
	     
	    }
	    for(int i=0;i<n;i++){
	        	      if(arr[i]>privious && arr[i]<max) privious=arr[i];

	    }
	    
	    if(privious==0) return -1;
	  else  return privious;
	
	    
	}
};
