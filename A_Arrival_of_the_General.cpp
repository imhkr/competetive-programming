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
int i=0;
// int t=1;
// cin>>t;
// while(t--){
    int n;
    cin>>n;
    int themax=0,themin=1e9;
    int c[n];
    for(int i=1;i<=n;i++)
      {
        cin>>c[i];
        themax=max(themax,c[i]);
        themin=min(themin,c[i]);
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(c[i]==themax)
        {
            int index=i;
            while(index!=1)
            {
                swap(c[index],c[index-1]);
                index--;
                ans++;
            }
            break;
        }
    }
    for(int i=n;i>0;i--)
    {
        if(c[i]==themin)
        {
            int index=i;
            while(index!=n)
            {
                swap(c[index],c[index+1]);
                index++;
                ans++;
            }
        break;
        }
    }
    cout<<ans<<endl;
return 0;
}
































