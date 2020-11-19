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
    string s;
    cin>>s;
    map<char,int>count;
    for(int i=0;i<s.size();i++)
    {
        count[s[i]]++;
    }
    // if(s.size()%2==0)
    // cout<<""<<endl;
    for(auto ii:count)
    {
        if(ii.second%2!=0)
        {
            cout<<ii.first;
            ii.second-=1;
        }
    }
    cout<<endl;
}
return 0;
}