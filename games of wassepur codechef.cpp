#include<bits/stdc++.h>
#include<map>
using namespace std;
#define ll long long

const ll N=1e5+1;
int main(){

    ll t;
    cin>>t;
    ll d[N];
    d[1]=1;
    d[2]=0;
    for(ll i=3;i<N;i++)
	{
        d[i]=min(d[i-1],d[i-2])^1;
    }
    while(t--)
	{
        ll n;
        cin>>n;
        string s;
        cin>>s;
        char x='2';
        ll c=0;
        for(char i : s)
		{
            if(i!=x){
                x=i;
                c++;
            }
        }
        if(d[c]==1)
		{
            cout<<"SAHID"<<endl;
        }
        else
		{
            cout<<"RAMADHIR"<<endl;
        }
    }
}
