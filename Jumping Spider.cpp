#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int A,B; cin>>A>>B;
		int C=0,D=0;
		if(A>B)
		{
		
		while(D<A)
		{
			D = D+B;
			A = A-1;
			C++;
			cout<<D<<" "<<A<<" "<<C<<" "<<endl;
		}
		
			cout<<C<<endl;
		}
		else
		{
		cout<<B<<endl;	
		}
		
	}
}
