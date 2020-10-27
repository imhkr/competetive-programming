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
// int t=1;
// cin>>t;
// while(t--){
    int n;
    cin>>n;
    if(n>=0)
    {
        cout<<n<<endl;
    }
    else
    {
            int lastdigit=n/10;
            int secondlastdigit=n%10+(n/100)*10;
            if(lastdigit>=secondlastdigit)
            {
                cout<<lastdigit<<endl;
            }
            else
            {
                cout<<secondlastdigit<<endl;
            }
            
    }
    return 0;
}