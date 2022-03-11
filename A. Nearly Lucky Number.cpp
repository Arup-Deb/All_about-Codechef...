
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='7'||s[i]=='4')
		{
			continue;
		}
		else
		{
			cout<<"NO";
			goto statement;
		}
	}
	cout<<"YES"<<endl;
	statement:
		cout<<"";
}

