void checkString(string s)
{
    int v=0;
    int c=0;
    
    //Your code here
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o'||s[i]=='u') v++;
        else if(s[i]==' ') continue;
        else
        c++;
    }
    
    if(v>c)
        cout<<"Yes";
    else if(c>v)
        cout<<"No";
    else
        cout<<"Same";
    
    cout<<endl;
}
