#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
    int n; cin>>n;
	string s;
	cin>>s;
	
	//if(n<4)
//	{
//		cout<<"0"<<endl;
	//}
	//else
//	{
	int c=0,e=0;
	for(int i=0;i<n;i++)
		if(s[i]=='1')
			c=c+1;
		else
		e++;
	int ans = 0;
	  ans = max(ans,min(c,e)-1);
	cout<<ans<<endl;
//}
}
	return 0;		
	}

