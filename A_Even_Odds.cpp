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
#define mp make_pair
#define theminv 1e9
const int maxn=1e5+10;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
 
 bool isPrime(int n) {
    for (int i = 2; i<= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int32_t main(){
fast
// int i=0,j=0;
// int t=1;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
// }
long long int n,k;
cin>>n>>k;
long long int odd=n-(n/2);
if(k>odd)
{
    cout<<(k-odd)*2;
}
else
{
    cout<<(2*k)-1; 
}
// int odd[n]={0},even[n]={0},all[n]={0};
// for(int i=1;i<=n;i++)
// {
//     // int x;
//     // cin>>x;

//     if(i%2==0)
//     {
//         int j=0;
//         even[j]=i;
//         j++;
//     }
//     else
//     {
//         int k=0;
//         odd[k]=i;
//         k++;
//     }
// }
// sort(even,even+n);
// // cout<<even<<endl;
// sort(odd,odd+n);
// cout<<odd[3]<<endl;
// all=odd;
// int i=1;
// while(even[i]!='\0')
// {
//     all+=even[i];
//     i++;
// }
// // cout<<all<<endl;
// cout<<int(all[k]);
// string s;
// cin>>s;///>>k;
// sort(s.begin(),s.end());
// cout<<s<<endl;
// vector<long long int>nu,odd,even;
// rep(i,0,n)
// {
//     int x;
//     cin>>x;
//     if(x%2!=0)
//     {
//         odd.push_back(x);
//     }
//     else
//     {
//         even.push_back(x);
//     }
// }
// int j=0;
// for(auto i=0;i<odd.end();i++)
// {
//     nu[i]=odd[i];
//     j++;
// }
// for(auto i=j;i<even.end();i++)
// {
//     nu[i]=even[i];
// }
return 0;
}