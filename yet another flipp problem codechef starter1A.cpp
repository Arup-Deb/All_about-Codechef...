#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,k,j;
		double i;
		cin>>a>>k;
		if(k==0)
		{
			cout<<"YES"<<endl<<0<<endl;
		}
		else if(k%2!=0)
		{
			i=log2(k+1);
			j=(int)i;
			if((i-j)==0)
			{
				cout<<"YES"<<endl;
				for(j=0;j<i;j++)
				{
					cout<<pow(2,j)<<endl;
				}
			}
		}
			else
			{
				cout<<"NO"<<endl;
			}
		
	}
	return 0;
}
