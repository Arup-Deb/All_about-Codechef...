#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,sum=0;
		cin>>x>>y;
		sum=x*1+y*2;
		if(sum%2==0)
		{
			if(x==0 && y%2!=0)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
			
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
}
