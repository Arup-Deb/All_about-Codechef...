#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(s.size()<=1)
		{
			cout<<"NO"<<endl;
	  	}
		else
		{
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='1' && s[i+1]=='1' || s[i]=='1' && s[i+1]=='0')
				{
				cout<<"YES"<<endl;
				goto statement;
				}
			}
			cout<<"NO"<<endl;
			statement:
				cout<<"";
		}
	}
}
