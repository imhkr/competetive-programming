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
#define mp make_pair
#define theminv 1e9
const int maxn=1e5+10;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
 
 bool isPrime(int n) {
    for (int i = 2; i<= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int32_t main(){
fast
int i=0,j=0;
// int t=1;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
// }
int k;
cin>>k;
string s;
cin>>s;
int cnt[1000]={0};// it very important to inliz with 0 so no garbage value take place here.
for(int i=0;i<s.size();i++)
{
    cnt[s[i]-'a']++;
}
// for(int i=0;i<26;i++)
// {
//     cout<<cnt[i]<<endl;
// }

for(int i=0;i<26;i++)
{
    if(cnt[i]%k)//odd toh sabme equal nhi spread ho payega
    {
        cout<<-1<<endl;
        return 0;
    }
    else
    {
        cnt[i]/=k;//diivide by k to make it 1 
    }
}
for(int i=0;i<k;i++)//to print the characters of string k times
{
for(int j=0;j<26;j++)//transversing each letter of alphabet to know it frequency is 1 or more or 0 
{
for(int l=0;l<cnt[j];l++)
{
    printf("%c",j+'a');
}
}
}
return 0;
}