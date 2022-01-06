#include<bits/stdc++.h>
using namespace std ; 

int main(){
int t;
cin>>t ;
while (t--)
{
	int n,k,sum;
   cin>>n>>k ;
if (n%2== 0)
{
    if (k <= n/2)
    { 
         sum = 0 ;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((i+1)%2 != 0 && (j+1)%2 != 0 && (i==j) && sum < k)
                {
                    cout<<"R" ;
                    sum++ ;
                }
                else
                {
                    cout<<"." ;
                }   
            }
            cout<<endl ;
        }
    }
    if (k > n/2)
    {
        cout<<"-1"<<endl ;
    }
} 
if (n%2 != 0)
{
   if (k <= (n/2) + 1)
   {  sum = 0 ;
       for (int i = 0; i < n; i++)
       {
           for (int j = 0; j < n; j++)
           {
               if ((i+1)%2 != 0 && (j+1)%2 != 0 && (i==j) && sum < k)
                {
                    cout<<"R" ;
                    sum++ ;
                }
                else
                {
                    cout<<"." ;
                }
           }
           cout<<endl ;  
       }
   }
   else
   {
       cout<<"-1"<<endl ;
   }
   }

}
return 0;
}
