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
    cin>>n;
    int a[n];
    int b[i];
    vector<pair<int ,int>> ve;
    rep0
    {
        cin>>a[i];
    }
    rep0
    {
        cin>>b[i];
        ve.push_back(make_pair(a[i],b[i]));
    }
    sort(all(ve));
    int ans=0;
   int x=0;
   int suma=0;
    for(int i=n-1;i>=0;i--)
    {
        suma+=ve[i].second;
        if(suma<ve[i].first)
        {
            continue;
        }
        else if(suma>ve[i].first)
        {
            suma=max(suma-ve[i].second,ve[i].first);
            break;
        }
        else
        {
            suma=ve[i].first;
            break;
        }
    }
    if(suma!=0)
    {
        cout<<suma<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
           x+=ve[i].second;
        }
        cout<<x<<endl;
    }
}
return 0;
}