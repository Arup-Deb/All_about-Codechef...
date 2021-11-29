/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	int n;	cin>>n;
		string s;
		cin>>s;
		int t =0;
		int ans =0;
		for(int i=0;i<n;i++)
		{
			if(s[i] == 'w')
			{
				int j=i+1;
				while(j<n && s[j]==s[i-1])
				{
					t=t+j;
				}
			}
				else if(i>0 && s[i]!=s[i-1])
				{
					ans++;
					int k= i+1;
					while(k<n && s[k] == s[i])
					k++;t=t+k;
				}
				else
				{
					int k=i+1;
					while(k<n && s[k] == s[i])
					k++;
					t=t+k;
				}
		}
		//cout<<t<<endl;
			if(t>n*2)
			{
				cout<<ans-1<<endl;
			}
				else
				{
					cout<<"0"<<endl;
				}
			
		
	}
	}
	
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int x=0; int y=0;
		int p = s[0];
		if(p == 'w')
		{
			x=x+1;
		}
		else
		{
			y=y+1;
		}
		for(int j=0;j<n;j++)
		
		{
			if(p==s[j])
			continue;
			else if(s[j] == 'B')
			{
				y=y+1;
			}
			else
			{
				x=x+1;
			
			}
				p=s[j];
				
		}
	
		cout<<min(x,y)<<endl;
	}
}
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		float c=0;
		for(int i=1;i<n;i++)
		{
			if(s[i-1] !=s[i])
			{
				c = c+0.5;
			}
		}
		cout<<ceil(c)<<endl;
	}
}
