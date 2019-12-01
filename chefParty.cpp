#include<iostream>
using namespace std;

int main() {
	// your code goes here
	  cin.tie(NULL);
    ios_base :: sync_with_stdio(false);
	int T,a[10000],count,N,avail;
	cin>>T;
	while(T--)
	{
	    count=0,avail=0;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	    cin>>a[i];
	    }
	   sort(a,a+N);
	    for(int i=0;i<N;i++)
	    {
	      //  cout<<"hi";
	        if(a[i]<=avail)
	        {
	            count++;
	            avail++;
	        }
	        else break; 
	        
	    }

        cout<<count<<endl;	 
	}
	return 0;
}

