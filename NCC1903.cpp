#include <iostream>
using namespace std;

int main() {
	// your code goes here
//error done:got input and did computation in the same for loop
////had break in the for loop hence there had been some more array elemnts which stayed unread
	int t,i,n,k,a[1000000],count,sum;
	cin>>t;
	while(t--)
	{
		count=0;
		sum=0;
		cin>>n;
		cin>>k;
		for(i=0;i<k;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<k;i++)
		{
			sum+=a[i];
			if(sum<=n)
			{
				count++;
			}
			else
				break;

		}
		cout<<count<<endl;

	}
	return 0;
}

