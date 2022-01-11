#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int A,B,C,D,E,F,G,H;cin>>A>>B>>C>>D;
		
		E = (A*A*D*D*D);

		
		F= (B*B*C*C*C);
	
			
		if(E==F)
		{	
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}
