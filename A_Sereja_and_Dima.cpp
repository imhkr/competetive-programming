/**********  author:Himanshu Patel   *********/
//using two pointer approach 
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
/*
int t=1;
cin>>t;
}
while(t--){*/
    int n;
    cin>>n;
    int s=0,d=0;
    int ge[n];
    for(int i=1;i<=n;i++)
    {
        cin>>ge[i];
    }
    int to=0,fn=1,ln=n;
   for(int i=1;i<=n;i++)
   {
       if(ge[fn]>ge[ln])
       {
           to=ge[fn++];
       }
       else
       {
           to=ge[ln--];
       }
       if(i%2==1)
       {
           s+=to;
       }
       else
       {
           d+=to;
       }
   }
   cout<<s<<" "<<d<<endl;
return 0;
}