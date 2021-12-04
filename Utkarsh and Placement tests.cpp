#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c,d,e;
		cin>>a>>b>>c;
		cin>>d>>e;
		if(d==a || e==a)
		{
			cout<<a<<endl;
		}
		else
		{
			cout<<b<<endl;
		}
	}
}
