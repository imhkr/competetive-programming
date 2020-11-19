
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define vi   vector<long long int> 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
 
 
int32_t main(){
fast
int i=0,j=0;
int t=1;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    bool okk=true;
    int sum1=0,sum2=0,sum3=0;
    int x1[n];
    int x2[n];
    for(int i=0;i<n;i++)
    {
        cin>>x1[i];
        // sum1+=x1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>x2[i];
        // sum2+=x2[i];
    }
    //   sort(x1, x1 + n);
              sort(x2, x2 + n, greater<int>());
    for(int i=0;i<n;i++)
     {
        
        if(x1[i]+x2[i]>x)
        {
        
            okk=false;
        }
        
    // // cout<<x2[i]<<" ";
        }
    if(okk)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
    
return 0;
}