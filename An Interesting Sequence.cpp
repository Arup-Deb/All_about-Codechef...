#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; 
	cin>>t;
	while(t--)
	{
		int k,c=0;
		cin>>k;
		while(k%2==0)
		{
		
			k=k/2;
			c++;
		}
		cout<<c<<endl;
	}
	return 0;
}

