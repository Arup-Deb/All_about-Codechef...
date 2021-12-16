#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		if(n%2==1)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			string p = "";
			for(int i=0;i<n/2;i++)
			{
				p+="10";
			}
			cout<<p<<endl;
		}
	}
}
