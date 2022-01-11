#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		
		int p,arr[100],min = INT_MAX,max=INT_MIN;
		cin>>p;
		for(int i=0;i<p;i++)
		{
			cin>>arr[i];
		}
		sort(arr , arr+p) ;
		cout<<arr[p-1]-arr[0]<<endl;
	}
	return 0;
}
