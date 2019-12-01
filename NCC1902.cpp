#include <iostream>
using namespace std;
long long int digsum;

long long int ds(long long int n)
{  
    long long int sum = 0; 
    while (n != 0) 
    { 
     sum = sum + n % 10; 
     n = n/10; 
    }  
 return sum; 
 } 
long long int delta(long long int x)
{
    
    if(x<10)
    return x;
    else
    {
        digsum=ds(x);
      return delta(digsum);
    }
}

int main() {
	// your code goes here
	long long int l,r,t,i,j,a,b,c1,c2,m;
	cin>>t;
	while(t--)
	{
		c1=0,c2=0;
	    cin>>l>>r>>a>>b;
	    for(j=l;j<=r;j++)
	    {
	        m=delta(j);
	       // cout<<m<<endl;
	        if(m==a)
	        c1++;
	        else if(m==b)
	        c2++;
	    }
	    if(c1>c2)
	    cout<<"Onkar\n";
	    else if(c1<c2)
	    cout<<"Krushna\n";
	    else
	    cout<<"Draw\n";
	}
	return 0;
}

