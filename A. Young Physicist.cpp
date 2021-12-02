#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	int t;
	cin>>t;
	int a[100],b[100],c[100],p=0,q=0,r=0;
	for(int i=0;i<t;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
		p+=a[i];
		q+=b[i];
		r+=c[i];
	}
	if(p==0 && q==0 && r==0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
