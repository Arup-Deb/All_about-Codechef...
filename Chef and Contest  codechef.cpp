#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int X,Y,P,Q,z,w;
		cin>>X>>Y>>P>>Q;
		z=X+P*10;
		w=Y+Q*10;
		if(z>w)
		{
			cout<<"Chefina"<<endl;
		}
		else if(z<w)
		{
			cout<<"Chef"<<endl;
		}
		else
		{
			cout<<"Draw"<<endl;
		}
	}
}
