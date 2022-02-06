#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int N,A;
		cin>>N>>A;
		int min = INT_MIN;
		
		if((N-A)>A)
		{
			cout<<A<<endl;
		}
		else
		{
			cout<<(N-A)<<endl;
		}
	}
}
