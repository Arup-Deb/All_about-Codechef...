#include<iostream>

using namespace std;

void solve(int t)
{
	while(t--)
	{
		int n,odd=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			if(temp%2!=0)
			odd++;
		}
		if(odd%2!=0)
		odd--;
		cout<<odd/2<<endl;
	}
}
int main()
{
		int t;
	cin>>t;
	solve(t);
}
