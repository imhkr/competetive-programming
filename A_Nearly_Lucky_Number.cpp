/**********author:iamhkr********/
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
 
 
 
int32_t main(){
fast
// int t=1;
// cin>>t;
// while(t--){
    //vector<long long int> (0);
    // bool re=true;
    // long long int i=0,sum=0,n;
    // float l=0.0;
    string n;
    cin>>n;
    int tt=0;
    // long long int nn=int(n);
    // while(nn>0)
    // {
    //  l++;
    //  nn/=10;   
    // }
    // cout<<l<<endl;
    // if(n.size()<=1)
    // {
    
    //         re=false;
    // }

//    else
  //  {
    // for(i=0;i<n.size();i++)
    // {
    // //    if(n[i]=='0' or n[i]=='1' or n[i]=='2' or n[i]=='3' or n[i]=='5' or n[i]=='6' or n[i]=='8' or n[i]=='9')
    //   //  {
    //     //    re=false;
    //       //  break;
    //       sum+=n[i];
    //       cout<<i<<" "<<sum<<endl;
    //     }
    //  float tt=0;
    // long long int c=n;
    // while(c>0)
    // {
    //     l++;
    //  tt+=c%10;
    //  c=c/10;   
    // }

    
    for(int i=0;i<(n.length());i++)
    {
        if(n[i]=='4' or n[i]=='7')
        {
                tt++;
        }
    }
    if(tt==7 or tt==4)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    //count the no. of the 4 & 7
    // int seven=countseven(n,l);
    // int four=countfour(n,l);
    // int sum=seven+four;
    // if(sum==l)
    // {
    //     cout<<"YES"<<endl;
    // }
    // else
    // {
    //     cout<<"NO"<<endl;
    // }
//   cout<<tt<<endl;
return 0;
}
