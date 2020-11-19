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
    int n;
    cin>>n;
    int cnt=0;
    if(n%2==0&&n%3==0)
    {
        cnt++;
    }
    cout<<cnt<<endl;
return 0;
}