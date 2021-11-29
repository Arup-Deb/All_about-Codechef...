#include<bits/stdc++.h>
using namespace std;
#define ll long long

 
 
void sample(){
    ll p,k;
    cin>>p>>k;
    k=k+1;
    ll ans=0;
    ll arr[p];
    for(ll i=0;i<p;i++)
        cin>>arr[i];
    for(ll i=0;i<p-1;i++){
        if(k>0){
            ll x=pow(10,arr[i+1]-arr[i])-1;
            ll val=min(x,k);
            ans=ans+pow(10,arr[i])*val;
            k=k-val;
        }
    }
    ans+=k*pow(10,arr[p-1]);
    cout<<ans<<endl;
 
}
 
int main(){

    ll n;
    cin>>n;
    while(n--){
        sample();
    }
}
