#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int PC,PR;
		cin>>PC>>PR;
		if(PC<10 || PR<10)
		{
			cout<<"1 1"<<endl;
		}
		else
		{
			int sum=0,c=0,p=0;
			while(PC>0)
			{
				int m=PC%10;
				sum = sum+m;
				PC=PC/10;
				 c++;
			}
			int pum =0;
			while(PR>0)
			{
				int n=PR%10;
				pum = pum+n;
				PR = PR/10;
				p++;
			}
			if(sum>pum)
			{
				cout<<"1 "<<c<<endl;
			}
			else if(pum>sum)
			{
				cout<<"0 "<<p<<endl;
			}
		}
	}
}
