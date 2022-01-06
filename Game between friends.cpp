#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int A,B,C,D;
		cin>>A>>B>>C>>D;
		
		if(A>B)
		{
			B=B+C;
		}
		else
		{
			A=A+C;
		}
		if( A==B)
		{
			cout<<"S"<<endl;
			return 0;
		}
		if(A>B)
		{
			B=B+D;
		}
		else
		{
			A=A+D;
		}
		
		if(A>B || A==B)
		{
			cout<<"N"<<endl;
		}
		else
		{
			cout<<"S"<<endl;
		}
	}
}
