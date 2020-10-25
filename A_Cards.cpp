#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) (c.begin(), c.end())
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
 
 
int32_t main(){
fast
//int t=1;
//cin>>t;
//while(t--){
    int nn;
    cin>>nn;
    string s;
    cin>>s;
   // vector<int,greater<int>> p;
    int z=0,e=0,r=0,o=0,n=0;
    for(char c:s)
    {
        if(c=='z')
        {
            z++;
        }
        if(c=='n')
        {
            n++;
        }
    }
   for(int i=0;i<n;i++)
   {
       cout<<1<<" ";
   }
   for(int i=0;i<z;i++)
   {
       cout<<0<<" ";
   }
    
return 0;
}