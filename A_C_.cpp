/**********  author:Himanshu Patel   *********/
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
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
 
 
int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    int a,b,n,cnt=0;
    cin>>a>>b>>n;
    int tr=0;
    while(max(a,b)<=n)
    {
        if(a>b)
        {
            b+=a;
        }
        else
        {
            a+=b;
        }
        cnt++;
        //if(a>n || b>n) break;
    }
    cout<<cnt<<endl;
}

return 0;
}