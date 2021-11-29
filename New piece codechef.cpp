#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int A,B,P,Q,x,y;
		cin>>A>>B>>P>>Q;
		x=A+B;
		y=P+Q;
		if(A==P && B==Q)
		{
			cout<<"0"<<endl;
		}
		else  if(x%2==0&&y%2==0 || x%2!=0&&y%2!=0)
		{
			cout<<"2"<<endl;
		}
		
		else
		{
			cout<<"1"<<endl;
		}
	}
}
