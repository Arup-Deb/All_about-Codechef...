#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		string str;
		cin >> str;
		
		ll ans = 0;
		
		for( int i=0;i<n-1;i++)
		{
			if (str[i] == 'L' && str[i+1] == 'L')
			{
				cout << "YES"<<endl;
				goto cvv;
			}
			else if(str[i] == 'R' && str[i+1] == 'R')
			{
				cout << "YES"<<endl;
				goto cvv;
			}
		}
		
		cout << "NO"<< endl;
		cvv:;
	}
}
