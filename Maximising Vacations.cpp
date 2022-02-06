#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,x;cin>>n>>x;
		int c=0;
		string s;
		cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
			{
				c++;
			}
		}
	
		c=c+1;
		cout<<c/x<<endl;
	}
}
