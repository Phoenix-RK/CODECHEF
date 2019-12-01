#include <iostream>
using namespace std;


main() {

	// your code goes here;
	int T;
	long long int N,A,B,K,x=0;
	cin>>T;
	while(T--)
	{
	    cin>>N>>A>>B>>K;
	}
	for(long long int i=0;i<N;i++)
	{
	    if(i%A==0 && i%B==0);
	    else if(i%A == 0)
	    x++;
	    else if(i%B == 0)
	    x++;
	    else ;
	}
	if(x >= K)
	cout<<"Win\n";
	else
	cout<<"Lose\n";}
