#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int d1, t1, m1,d2,t2,m2;
		cin>>d1>>t1>>m1>>d2>>t2>>m2;
		 int p = d1 + t1 + m1;
		 int q = d2 + t2 + m2;
		 if(p>q)
		 {
		 	cout<<"DRAGON"<<endl;
		 }
		 else if(q>p)
		 {
		 	cout<<"SLOTH"<<endl;
		 }
		 else
		 {
		 	if(d1>d2)
		 	{
		 		cout<<"DRAGON"<<endl;
			 }
			 else if(d2>d1)
			 {
			 	cout<<"SLOTH"<<endl;
			 }
			 else if(t1>t2)
			 {
			 	cout<<"DRAGON"<<endl;
			 }
			 else if(t2>t1)
			 {
			 	cout<<"SLOTH"<<endl;
			 }
			 else
			 {
			 	cout<<"TIE"<<endl;
			 }
		 }
	}
}
