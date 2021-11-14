#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a>0 && a<100)
		{
			cout<<"Easy"<<endl;
		}
			if(a>199 && a<301)
		{
			cout<<"Hard"<<endl;
		}
			if(a>99 && a<200)
		{
			cout<<"Medium"<<endl;
		}
	}
	return 0;
}
