#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
}
int p=arr[0],q=arr[0];
	for(int i=0;i<n;i++)
	{
	if(p>arr[i])
	{
		p=arr[i];
		}	
		if(q<arr[i])
		{
			q=arr[i];
		}
	}
	//cout<<p<<q<<endl;
	cout<<q-p<<endl;
		
	}
}
