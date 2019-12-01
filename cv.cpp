#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	long long int T,n,x,count=0;
	char s[101];
	cin>>T;
	while(T--)
	{
	    count=0;
	    cin>>n;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i];
	    }
	    
	    if(n==1)
	    {
cout<<0;		    
	    return 0;
	    }
	    else
	    {
	        for(int i=0;i<n;i++)
	        {
	            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
	            {
	                if(s[i-1]!='a'&&s[i-1]!='e'&&s[i-1]!='i'&&s[i-1]!='o'&&s[i-1]!='u')
	                count++;
	            }
	        }
	    }
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}

