/*
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
	int n,p; cin>>n>>p;
	string s;
	cin>>s;
	
	while(p>1)
	{
		reverse(s.begin(),s.begin()+p);
		p--;
	}
	cout<<s<<endl;
	
}

}
*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
	int n,k; cin>>n>>k;
	string s;
	cin>>s;
	
	string ans =" ";
	int i=0,j = k-1;
	
	while(i<j)
	{
		ans+=s[i];
		ans+=s[j];
		i++;
		j--;
	}
	if(i==j)ans+=s[i];
	
	reverse(ans.begin(),ans.end());
	ans+= s.substr(k,n);
	
	cout<< ans <<endl;
}
return 0;
}
