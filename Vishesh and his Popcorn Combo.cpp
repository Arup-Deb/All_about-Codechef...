#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int a,b,c,d,e,f,p,q,r;
		cin>>a>>b;
		cin>>c>>d;
		cin>>e>>f;
	 p=a+b;
	 q=c+d;
	 r = e+f;
		if(p>q && p>r)
		{
			cout<<p<<endl;
		}
		else if(p<q && q>r)
		{
			cout<<q<<endl;
		}
		else
		{
			cout<<r<<endl;
		}
	}
}
