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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int cnt=0,one=0;
            int zero=0,tt=0;
            

  
    int first=-1;
    int last=-1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            first=i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            last=i;
            break;
        }
    }
// first 1 and last 1 ki index nikl li
// if(first==last && first==-1)
// {
//     cout<<0<<endl;
//     continue;
// }
int suma=n;

for(int i=first;i<=last;i++)
{
    int no_of_zero=0;
    while(s[i]=='0')
    {
        no_of_zero++;
        i++;
    }
    suma+=min(n,no_of_zero*m);
}
       cout<<suma<<endl;
}
    // cout<<n+1<<endl;
return 0;
}