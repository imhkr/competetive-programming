/**********author:iamhkr*********/
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
#define rep0 for(int i=0;i<n;i++)
#define rep1(n) for(int i=1;i<n;i++)
#define rep11(n) for(int i=1;i<=n;i++)
#define repj1(n)  for(int j=1;j<=n;j++)
#define repij(n) for(int j=0;j<i;i++)
#define vi   vector<long long int> 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
 
 
int32_t main(){
fast
// int i=0,j=0;
// int t=1;
// cin>>t;
// while(t--){
    string s1,s2;
    //  int a=0;
    // int m=0;
    cin>>s1>>s2;
    // a=stoi(s1);
    // m=stoi(s2);
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[i])
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
        
    }


  //cout<<re<<endl;

return 0;
}