class Solution{
public:	
		
	string removeVowels(string s) 
	{
	    // Your code goes here
	    string str;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i] == 'u');
	        else str.push_back(s[i]);
	    }
	    return str;
	}
};
