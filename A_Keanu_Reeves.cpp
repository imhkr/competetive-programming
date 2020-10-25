/*author: Himanshu Patel*/
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
//cin>>t;
//while(t--){
    int n;
    int a=0,b=0;
    cin>>n;
    string s;
    cin>>s;
    for(char c:s)
    {
        if(c=='1')
        {
            a++;
        }
        else
        {
            b++;
        }
        //cout<<"a"<<a<<" "<<"b "<<b<<endl;
    }
    if(a!=b)

    {
        cout<<1<<endl<<s<<endl;
    }
    else
    {
        cout<<2<<endl<<s.substr(0,n-1)<<" "<<s[n-1]<<endl;
    }
return 0;
}