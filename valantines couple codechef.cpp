#include <bits/stdc++.h>
#define ll long long
using namespace std;


void sample(int n)
{
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        int A[a],B[a];
        for(i=0;i<a;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<a;i++)
        {
            cin>>B[i];
        }
        int M[a];
        sort(A,A+a);
    sort(B,B+a,greater <int>());
        for(int i=0;i<a;i++)
        {
            M[i]= A[i]+B[i];
        }
        int maxi=0;
        for(int i=0;i<a;i++)
        {
            if(maxi<M[i])
            maxi =M[i];
        }
        cout<<maxi<<endl;
    }
}
int main() {
int n;
cin>>n;
sample(n);
return 0;
}
