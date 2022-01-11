#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
	int A,B;cin>>A>>B;
	int sum=0;
	if(B>10)
	{
		int e = B-10;
		sum = pow(2,10)* pow(3,e);
	}
	else
	{
		sum = pow(2,B);
	}
	
	if(sum>A)
	{
		cout<<A<<endl;
	}
	else
	{
		cout<<sum<<endl;
	}
}

}
