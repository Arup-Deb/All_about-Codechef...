#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int N,K;
		cin>>N>>K;
		int p=N/K;
		int q=N%K;
		if(q!=0)
		{
			cout<<p+1<<endl;
		}
		else
		{
			cout<<p<<endl;
		}
	}
}
