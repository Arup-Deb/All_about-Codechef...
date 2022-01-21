#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int k; cin>>k;
		int p=0;
		while(p<=52)
		{
			p=p+k;
		}
		cout<<52-p+k<<endl;
	}
}
