/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p=-1,c=1;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]==1)
			{
				c=c+1;
			}
			if(arr[i+1]==1)
			{
				c=c+4;
			}
		
			if(arr[i]==0)
			{
			if(arr[i+1]==0)
			{
				c=-1;
			
			}
				break;
			}
		
		
		}
		cout<<c<<endl;
	}
}
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{int n;
	int c=1;
cin>>n;
 
int arr[n];
for(int i=0;i<n;++i)
{
cin>>arr[i];
}
for(int i=0;i<n;++i)
{
if(arr[i]==1)
{
c+=1;
if(arr[i+1]==1 )
c+=4;
}
if(arr[i]==0)
{if(arr[i+1]==0 )
{c=-1;
break;
} 
}
}
cout<<c<<endl;
}
}

