/**********author:iamhkr*********/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a))
#define mem0(a) memset(a,0,sizeof(a))
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
 
 
int32_t main(){
fast
int i=0,j=0;
// int t=1;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
// }
int n;
cin>>n;
int sum=0,sum1=0,sum2=0,sum3=0;
while(n--)
{
int a,b,c;
cin>>a>>b>>c;
sum1+=a;
sum2+=b;
sum3+=c;
// int x[n];
// int y[n];
// int z[n];
// rep(i,0,n)
// {
//     cin>>x[i];
//     sum1+=x[i];
// }
// rep(i,0,n)
// {
//     cin>>y[i];
//     sum2+=y[i];
// }
// rep(i,0,n)
// {
//     cin>>z[i];
//     sum3+=z[i];
// }
// rep(i,0,n)
// {
//     sum+=abs(x[i]+y[i]+z[i]);
// }
//int re=abs(sum1)-abs(sum2)-abs(sum3);
}
if(sum1==0 && sum2==0 && sum3==0)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}

return 0;
}