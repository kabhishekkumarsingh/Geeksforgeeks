#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

#User function Template for python3

def cat_hat(str):
  ##your code here##
  ##You need to write complete code this time 
  x=str.count("cat")
  y=str.count("hat")
  if(x==y):
      return True
  else:
      return False


#{ 
 # Driver Code Starts.




def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        str = input()
        print(cat_hat(str))
        testcases-=1
        


if __name__=='__main__':
    main()
# } Driver Code Ends
