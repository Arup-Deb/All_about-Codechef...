#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
	{
      int k;
      cin>>k;
      int c=2,val=1;
       k=k-1;
      while(k>=val)
	   {
          k-=val;
          c=c+2;
          val++;
        }
        cout<<c<<endl;
    }
}
