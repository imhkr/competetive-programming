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
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
 
 
int32_t main(){
fast
//int t=1;
//cin>>t;
//while(t--){
    //int n ;
   // cin>>n;
//}
vector<int>tt;
for(int i=0;i<4;i++)
{
    int x;
    cin>>x;
    tt.push_back(x);
}
sort(all(tt));
int bigg=tt[4-1];
//cout<<bigg<<endl;
int n1=abs(bigg-tt[0]);
int n2=abs(bigg-tt[1]);
int n3=abs(bigg-tt[2]);
cout<<n1<<" "<<n2<<" "<<n3<<endl;
/*int tt[4];
tt[0]=a;
int themaxvalue=max4(a,b,c,d);
int n1=abs(themaxvalue-a);
int n2=abs(themaxvalue-b);
int n3=abs(themaxvalue-c)*/
return 0;
}