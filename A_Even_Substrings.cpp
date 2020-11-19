/**********  author:Himanshu Patel   *********/
#include <bits/stdc++.h>
using namespace std;

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
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
 
 
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    string s;
    cin>>n;
    cin>>s;
    int ans=0;
    for(long long int i=0;i<n;i++)
    {
        if((int(s[i])&1)==0)
        {
            ans=ans+i+1;
        }
    }
    cout<<ans;
}