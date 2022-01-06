#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
	int n;cin>>n;
	string s; int c=0,e=0;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='c' && s[i+1]=='o' && s[i+2]=='d' && s[i+3]=='e')
		{
			c = 4*i + 6;
			goto statement;
		}
	}
	statement:
		cout<<"";
		for(int i=0;i<n;i++)
	{
		if(s[i]=='c' && s[i+1]=='h' && s[i+2]=='e' && s[i+3]=='f')
		{
			e = 4*i + 6;
			goto tiar;
		}	
	}
	tiar:
		cout<<"";
	
	if(e>c)
	{
		cout<<"AC"<<endl;
	}
	else
	{
		cout<<"WA"<<endl;
	}
}
}
