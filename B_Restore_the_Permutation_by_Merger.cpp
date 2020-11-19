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
#define rep1 for(int i=0;i<n;i++)
#define rep3 for(int i=1;i<=n;i++)
#define rep2  for(int j=1;j<=n;j++)
#define rep4 for(int j=0;j<i;i++)
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
    int x[2*n];
    unordered_set<int> ste;
    for(int i=0;i<2*n;i++)
    {
        
        cin>>x[i];
    }
    int f[n]={0};
    vector<int>p;
    for(int i=0;i<2*n;i++)
    {
        f[x[i]]++;
        if(f[x[i]]%2!=0)
        {
            p.push_back(x[i]);
        }
    }
    for(auto it:p)
    {
        cout<<it<<" ";
    }
    
  cout<<endl;


}
return 0;
}