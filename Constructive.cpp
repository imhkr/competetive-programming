/**********author:iamhkr*********/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep0 for(int i=0;i<n;i++)
#define rep1(n) for(int i=1;i<n;i++)
#define rep11(n) for(int i=1;i<=n;i++)
#define repj1(n)  for(int j=1;j<=n;j++)
#define repij(n) for(int j=0;j<i;i++)
#define vi   vector<long long int> 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
 
 
int32_t main(){
fast
int i=0,j=0;
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int minn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<minn)
        {
            minn=a[i];
        }
    }
    if(n&1)
    {
        cout<<minn+1<<endl;
    }
    else if(n&0)
    {
        cout<<minn<<endl;
    }
}
return 0;
}