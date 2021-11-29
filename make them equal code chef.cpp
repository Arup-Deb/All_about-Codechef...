#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		int arr[N];
		for(int i=0;i<N;i++)
		{
			cin>>arr[i];	
	    }
	       /*
	    int max = arr[0];
		for(int i=0;i<N;i++)
		{
			 if (arr[i] > max)
            max = arr[i];
		}
		int c=0;
			for(int i=0;i<N;i++)
		{
			 if (max==arr[i])
            c++;
		}
		int sum =0,p,q;
		for(int i=0;i<N;i++)
		{
			sum = sum +(max-arr[i]);
		}
	if(N==c)
	 {
	 	cout<<"0"<<endl;
	 }
	 p = sum/(N-c);
	 q = sum%(N-c);

	 if(N!=c)
	 {
	 
		if(q==0)
		{
			cout<<p<<endl;
		}
		else
		{
			cout<<p+1<<endl;
		}
		*/
		int maxm= INT_MAX;
		int minm= INT_MIN;
		for(int i=0;i<N;i++)
		{
			minm= max(minm,arr[i]);
			maxm= min(maxm,arr[i]);
		}
		if(maxm==minm)
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<minm-maxm<<endl;
		}
	}
	}

