#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
    while(n--)
	{
		int a;
		cin>>a;
	long long int sum=0,sum_of_all=pow(2,a);
		
		if(a==1)
		{
			cout<<"1"<<" "<<"1"<<endl;
		}
		else
		{
			for(int i=1;i<=a-1;i++)
			{
				cout<<i<<" ";
				sum=sum+i;
				if(i==a-1)
				{
					cout<<i<<" ";
					sum=sum+i;
				}
			}
			cout<<(sum_of_all- sum)<<endl;
		}
	
	}
	return 0;
}
