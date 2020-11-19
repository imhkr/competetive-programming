
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
int t=1;
cin>>t;
while(t--){
	int n,i,j=0,k=0,m=0;
	cin>>n>>k;
	string s;
	cin>>s;
	int p=k+1,l,r,count=0;
	queue<int> magsha;
	queue<int> iron;
	for(i=0;i<n;i++)
	{
		if(s[i]=='M')
		magsha.push(i);
		if(s[i]=='I')
		iron.push(i);
		if(s[i]=='X'||i==n-1)
		{
			int l,r,sheet=0,q;
			while(!magsha.empty()&&!iron.empty())
		{
			sheet=0;
			l=min(magsha.front(),iron.front());
			r=max(magsha.front(),iron.front());
			for(q=l;q<=r;q++)
			{
				if(s[q]==':')
				sheet++;
			}
			if((p-abs(l-r)-sheet)>0)
			{
				count++;
				magsha.pop();
				iron.pop();
			}
			else if(magsha.front()<iron.front())
			{
				magsha.pop();
			}
			else
			{
				iron.pop();
			}
		}
		
		while(!magsha.empty())
			magsha.pop();
			while(!iron.empty())
			iron.pop();
		}
	}
	cout<<count<<endl;
	
}
return 0;
}