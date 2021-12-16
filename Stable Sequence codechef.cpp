/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	int t;cin>>t;
	while(t--)
	{
		int n,sol,arr[n]; cin>>n;
		int maxNo = INT_MIN;
	int minNo = INT_MAX;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
		maxNo = max(maxNo, arr[i]);
		minNo = min(minNo, arr[i]);
		}
		if(maxNo==minNo)
		{
			sol=0;
		}
		else if(arr[n-1]==maxNo)
		{
			sol=1;
		}
		else
		{
			sol=2;
		}
		cout<<sol<<endl;
	}
}

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int s;
		vector<int>f;
		vector<int> v;
		
		for(int i=0;i<n;i++)
		{
			cin>>s;
			v.push_back(s);
		}
		f=v;
		sort(f.begin(),f.end());
		int max=f[n-1];
		int min=f[0];
		if(max==min)
		cout<<0;
		else if(v[n-1]==max)
		cout<<1;
		else
		cout<<2;
	}
}
