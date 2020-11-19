/**********author:iamhkr*********/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a))
#define mem0(a) memset(a,0,sizeof(a))
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int findkrdo(int x[],int i,int sumc,int sumt)
{
    if(i==0)
        return abs((sumt-sumc)-sumc);
        return min(findkrdo(x,i-1,sumc+x[i-1],sumt),findkrdo(x,i-1,sumc,sumt));
}

int thesmall(int x[],int n)
 {
    int sumt=0;
    for(int i=0;i<n;i++)
    {
        sumt+=x[i];
    }
    return findkrdo(x,n,0,sumt);
} 
 
 
int32_t main(){
fast
int i=0,j=0;
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int sum=0;
  int x[n];
    rep(i,0,n)
    {
        cin>>x[i];
        sum+=x[i];
    }
     sort(x,x+n);
     if(n==1)
     {
         cout<<x[0]<<endl;
     }
     else if(n==2)
     {
         cout<<x[1]<<endl;
     }
     else
     {
         int theminash=thesmall(x,n);
         int half=sum/2;
         int thesmallestby=theminash/2;
         half=half-thesmallestby;
         half=half+theminash;
         cout<<half<<endl;
     }


     
//     int a,b;
//     int cnt=0;
    
//    rep(i,0,n)
//    { 
//        if(i==0 or i==1 )
//        {
//            a=x[i];
//        b=x[i+1];
//        }  
//        if(a>b)
//        {
//            a=abs(a-b);
//            b=x[i];
//        }
//        if(a<b)
//         {
//         b=abs(a-b);
//         a=x[i];    
//         }
//        if(i<n)
//        {
//        cnt+=min(a,b);
//    //cout<<cnt<<endl;    
   
//        }
//         else
//        {
//            cnt+=max(a,b);
   
//    //cout<<"else"<<cnt<<endl;    

//        }
//    }
//    cout<<cnt<<endl;    

    // if(n==1)
    // {
    //     cout<<x[0]<<endl;
    // }
    // if(n==2)
    // {
    //     cout<<max(x[0],x[1])<<endl;
    // }
    // if(n==3)
    // {
    //     if(x[0]+x[1]<=x[2])
    //     {
    //         cout<<x[2]<<endl;
    //     }
    //     else
    //      {
    //          cout<<x[0]+x[1]<<endl;
    //     }
    // }
    // if(n==4)
    // {
    //     if((x[0]+x[3])>=(x[1]+x[2]))
    //     {
    //         cout<<x[0]+x[3]<<endl;
    //     }
    //     else
    //     {
    //         cout<<x[1]+x[2]<<endl;
    //             }
    // }
}
    return 0;
}
