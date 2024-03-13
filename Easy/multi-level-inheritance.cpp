//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

class student
{
    protected :
        int roll_number;
        
    public:
        void set_number(int a)
        {
            roll_number = a;
        }
        
        void display_number()
        {
            cout<<roll_number<<endl;
        }
};


// } Driver Code Ends
//User function Template for C++
class test: public student 
{
    // Add set_marks() method here.
    public:
    float marks[5];
    void set_marks(float mark[]){
        for(int i=0;i<5;i++)
        marks[i]=mark[i];
    }
};

class result: public test
{
    // Add display() method here.
     public:
        void display()
        {
            float sum = 0 , avg = 0;
            for(int i=0;i<5;i++)
            {
                sum += marks[i];
            }
            
            avg = sum/5;
            
            cout << roll_number << " " << sum << " " << avg << endl;
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
    	result student1;
	    int n;
	    cin>>n;
	    student1.set_number(n);
	    float temp[5];
	    int i;
	
	    for(i = 0; i < 5; i++)
	        cin>>temp[i];
	
	    student1.set_marks(temp);
	    student1.display();
	}

	return 0;    
}

// } Driver Code Ends
