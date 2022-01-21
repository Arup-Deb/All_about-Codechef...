#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long n; cin>>n;
		int A; cin>>A;
		if(n==1)
		{
			if(A%2==0)
			{
				cout<<"Even"<<endl;
			}
			else
			{
				cout<<"Odd"<<endl;
			}
			continue;
		}
		if(A%2==1)
		{
			if(n%2==0)
			{
				cout<<"Even"<<endl;
			}
			else
			{
				cout<<"Odd"<<endl;
			}
		}
		else
		{
			cout<<"Impossible"<<endl;
		}
	}
	return 0;
	
}
