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
    int n;
    cin>>n;
    int cnt=0;
   
    while(n%3==0)
    {
         cnt++;
        n/=3;
        n*=2;
       
    }
    while(n%5==0)
    {
        cnt++;
        n/=5;
        n*=4;
        
    }
     while(n%2==0)
    {
        cnt++;
        n/=2;
    }
    if(n==1)
    {
    cout<<cnt<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
}
return 0;
}
//note:try to divide first with bigger no.