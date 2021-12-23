#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,a;
		cin>>n;
			int sum=0;int min = INT_MAX;
		for(int i=0;i<n;i++)
		{
		cin>>a;
		sum = sum+a;
//}
	
		
	//	for(int i=0;i<n;i++)
	//	{
			if(min>a)
			{
				min = a;
			}
		}
		cout<<sum-min<<endl;
	}
	
}
