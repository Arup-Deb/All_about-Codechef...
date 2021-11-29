#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,K;
		cin>>N>>K;
		/*
		if(N=0)
	{
		cout<<"0"<<endl;
	}
		else if(N>0 && K>N)
		{
		cout<<"1"<<endl;
		}
	
	else
		{
			int c=0;
			while(N>0)
			{
				N=N-K;
				c++;
			}
			if(N<0)
			{
				cout<<"-1"<<endl;
			}
			else
			cout<<c<<endl;
     	}
     	*/
     	if(N%K==0)
     	{
     		cout<<N/K<<endl;
		 }
		 else
		 {
		 	cout<<"-1"<<endl;
		 }
	}
}
