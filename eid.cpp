#include <iostream>

using namespace std;

int main() {
	// your code goes here
	
	int T,i,j,a[3],c[3],temp;
	cin>>T;
	while(T--)
	{
	    
	    for(i=0;i<3;i++)
	        cin>>a[i];
	    for(i=0;i<3;i++)
	        cin>>c[i];
	        
	     for(i=0;i<3;i++)
	     {
	         for(j=0;j<3-i-1;j++)
	         {
	             if(a[j]>a[j+1])
	             {
	                 temp=a[j];
	                 a[j]=a[j+1];
	                 a[j+1]=temp;
	                 
	                 temp=c[j];
	                 c[j]=c[j+1];
	                 c[j+1]=temp;
	                 
	             }
	         }
	         
	     }
	     for(i=0;i<3;i++)
	     {
		     cout<<a[i]<<" "<<c[i]<<"\n";
	     }
	     int flag=1;
	     for(i=0;i<2;i++)
	     {
		     cout<<a[i]<<" "<<c[i]<<endl; 
	         if(((a[i]<a[i+1]) && (c[i]>=c[i+1]))||((a[i]>a[i+1])&&(c[i]<c[i+1]))||((a[i]==a[i+1])&&c[i]!=c[i+1]))
		 {
			 flag=0;
			 break;
		 }
			 /*
	         
	         else if(a[i]>a[i+1] && c[i]>c[i+1])
	         flag=1;
	         
	         else if(a[i]==a[i+1] && c[i]==c[i+1])
	         flag=1;
	         
	         else
	         {
	         flag=0;
	         break;
	         }*/
	         
	     }
	     if(flag==0)
	     cout<<"NOT FAIR\n";
	     
	     else
	     cout<<"FAIR\n";
	     
	    
	}
	return 0;
}
