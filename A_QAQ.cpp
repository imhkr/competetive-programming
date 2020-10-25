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
/*
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
}*/
char s[100];
cin>>s+1;
int i=0,j=0,k=0,ansm=0;
int n=strlen(s+1);
for(i=1;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        for(k=j+1;k<=n;k++)
        {
            if(s[i]=='Q'&&s[j]=='A'&&s[k]=='Q')
            {
                ansm++;
            }
        }
    }
}
cout<<ansm<<endl;
return 0;
}