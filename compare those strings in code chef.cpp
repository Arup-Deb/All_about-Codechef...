#include <bits/stdc++.h>
using namespace std;
void sample(int T)
    {
    int n; 
	string a,b;
	 cin>>n>>a>>b;
    vector<int> v;
    int c=0; 
	int ans =0;
   for(int i=0; i<n; i++)
    {
        if(a[i]==b[i]) 
		c++;
        else if(a[i] < b[i])
        {
            v.push_back(i);
            ans=ans+c;
            c=0;
        }
        else
        {
            c=0;
        } 
    }
    ans= ans + v.size();
    cout << ans << endl;
    }
    
    
    int main()
    {
       int T;
       cin>>T;
    while (T--)
    {
    sample (T);
    }
    return 0;
    }
