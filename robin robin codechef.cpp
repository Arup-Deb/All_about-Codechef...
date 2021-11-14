#include<iostream>
using namespace std;
#define ll long long

int main()
{
	ll int n;
	ll int k;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>k>>n;
		ll int p=0;
		if(n==1 || n==2)
		{
			p=2*(k-n);
		}
		else{
			if(n%2==1)
			{
				p=2*(k-n)+ 2*(n/2);
			}
			else{
				p=2*(k-n)+ 2*((n/2)-1);
			}
		}
		cout<<p<<endl;
	}
}
