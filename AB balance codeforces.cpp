#include<bits/stdc++.h>
using namespace std;
#define ll long long



void sample(){
    string t;
    cin>>t;
    ll c=0;
    for(int i=0;i<t.size()-1;i++){
        if(t[i]=='a' && t[i+1]=='b')
            c++;
        else if(t[i]=='b' && t[i+1]=='a')
            c--;
    }
    
    if(c==0){
        cout<<t<<endl;
    }
    else if(c==1){
        for(int i=0;i<t.size()-1;i++){
            cout<<t[i];
        }
        cout<<"a"<<endl;
    }
    else{
        for(int i=0;i<t.size()-1;i++){
            cout<<t[i];
        }
        cout<<"b"<<endl;
    }
}

int main(){

    ll n;
    cin>>n;
    while(n--){
        sample();
    }
}
