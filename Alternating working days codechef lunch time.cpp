#include<bits/stdc++.h>


using namespace std;
int main()
{
	int n,A,B,P,Q;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A>>B>>P>>Q;

		if(P%A==0 && Q%B==0 && (P/A==Q/B || abs(P/A-Q/B)==1))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	
	
	return 0;
}
