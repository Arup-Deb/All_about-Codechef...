#include<iostream>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		long long A,B; cin>>A>>B;
		int arr[A];
		
		for(int i=0;i<A;i++)
		{
			cin>>arr[i];
		}
		int P=100;
		for(int i=0;i<A;i++)
		{
			int c=0;
			for(int j=i;j<A;j++)
			{
			 c+=arr[j];
				
				if(c>=B)
				{
					P = min(P,(j-i+1));
				}
			}
		}
		if(P<100)
		{
			cout<<P<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
}
