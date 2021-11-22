#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int X,Y,Z;
		cin>>X>>Y>>Z;
		int p=X+Z*2;
		if(p>=Y)
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

