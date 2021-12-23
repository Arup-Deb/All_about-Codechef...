#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int a,b,arr[a];
		cin>>a>>b;
		vector<int> v;
		for(int i=0;i<a;i++)
		{
			cin>>arr[i];
			if(arr[i]>b)
			{
				v.push_back(arr[i]);
			}
		}
		cout<<v.size()<<endl;
	}
} 
