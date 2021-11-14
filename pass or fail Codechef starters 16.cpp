#include<iostream>
using namespace std;
void sample (int n)
{
	int a,b,c,p,q;
	for( int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		p=a-b;
		q=b*3-p*1;
		if(q>c || q==c)
		{
			cout<<"PASS"<<endl;
			
		}
		else
		{
			cout<<"FAIL"<<endl;
		}
	}
	
}
int main()
{
	int n;
	cin>> n;
	sample(n);
	return 0;
}
