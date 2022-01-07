#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
        else
    return gcd(b , a % b);
}
int main() 
{
    int T;
    cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int arr[N];
	     for(int i=0;i<N;i++)
	      { cin>>arr[i];  }
	    int res=arr[0];
	     for(int i=1;i<N;i++)
	     {
	        res=gcd(res,arr[i]);
	     }
	    cout<<res<<"\n"<<endl;
	}
	return 0;
}