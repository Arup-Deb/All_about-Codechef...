#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<long long> temp;
	for(int i=0;i<17;i++)
	{
		for(int j=i+1 ;j<18;j++)
		{
			for(int k=j+1;k<19;k++)
			{
				for(int l=k+1;l<20;l++)
				{
					long long val = (1 << l) + (1 << k) + (1 << i);
					temp.push_back(val);
				}
				if(temp.size() == 1000)
				{
					break;
				}
			}
				if(temp.size() == 1000)
				{
					break;
				}
		}
			if(temp.size() == 1000)
				{
					break;
				}
	}
	int tc = 0,tt = 1;
	cin>>tt;
	while(tc++ < tt)
	{
		long long n;cin>>n;
		
		for(int i=0;i<n;i++)
		{
			cout<<temp[i] << " ";
		}
cout<<endl;
	}
	return 0;
}
