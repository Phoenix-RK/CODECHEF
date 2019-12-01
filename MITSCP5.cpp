#include <iostream>
#include<stdio.h>

using namespace std;

int main() {
	// your code goes here
	int n,a[1000],count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        if(i==j)
	        continue;
	        else
	        if(a[i]==-a[j])
	        count++;
	    }
	}
	cout<<count/2<<endl;
	return 0;
}

