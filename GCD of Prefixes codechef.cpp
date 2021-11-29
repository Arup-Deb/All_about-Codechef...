#include <bits/stdc++.h>
using namespace std;
void sample(int T)
{
 int n; 
 cin>>n;
vector<int>b,a;
 int x;
int c=true;
for(int i=0; i<n; i++)
{
    cin>>x; 
	b.push_back(x);
    if(i>0 && b[i-1]%b[i]!=0)
    {
        c=false;
    }
}
if(c)
{
   for(int i=0; i<n; i++)
    cout << b[i] << ' ';
    cout << endl;
}
else cout << "-1\n";
 
 
}

int main()
{

int T=1;
cin>>T;
while (T--)
{
      sample(T);
}

     return 0;
}
