/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr, arr + n);
		int ans=0;
		for(int i=0;i<arr.size();i++)
		{
			cout<<arr[i]<<" ";
		}
	//	for(int i=1;i<=n;i++)
	//	{
	
	//		 ans=((arr[n]-arr[n-1])*arr[1]);
	//	}
	//	cout<<ans<<endl;
	}
	
}
*/
// C++ program to sort an array
#include <algorithm>
#include <iostream>

using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
	int n; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr + n);
   long ans = (arr[n-1]-arr[0])*arr[n-2];
   cout<< ans << endl;
}
}

