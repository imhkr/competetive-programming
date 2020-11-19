//In the name of God
 
#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long a,b;
		cin>>a>>b;
		// if(b<a)
		// 	swap(a,b);
		long long ans=0;
		while(a!=0 && b!=0)
		{
			if(a<b)
				swap(a,b);
                cout<<"swap"<<a<<" "<<b<<endl;
			ans+=b/a;
			a%=b;
		}
		cout<<ans<<endl;
	}
	return 0;
}