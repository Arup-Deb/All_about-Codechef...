#include <iostream>
#include <cmath>
using namespace std; 
#define ll long long
int main()
{
	ll int x;
	ll int k;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>x>>k;
		ll int minL=0;
		ll int maxL=0;
		
		minL=(x*2);
		maxL=((k*x)*((k*x)-1));
		cout<<minL<<" "<<maxL<<endl;
	}
}
