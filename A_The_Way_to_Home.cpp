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
  
char array[101];
int arr[101];
 
int main()
{
	int n,d;
	scanf("%d %d",&n,&d);//cin>> n>>d;
	int i,j;
	scanf("%s",array);
	
	for(i=0;i<n;i++)
		if(array[i]=='0')
			arr[i]=0;
		else
			arr[i]=1;
 
	int max=0,count=0;
	for(i=0;i<=n-1;)
	{
		
		for(j = 1; j <= d && (i + j) < n ;j++)
		{
			if(arr[i+j]==1)
				max = i+j;
		}
		if(max==i)
			break;
		else
			i = max;
		count++;;
	}
	if(i==n-1)
		printf("%d\n",count);//cout<<count<<endl;
	else 
		printf("-1\n");//cout<<"-1"<<endl
}
