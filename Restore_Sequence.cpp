#include<bits/stdc++.h>
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
using namespace std;
int main()
{
    long long int var1 = 4000005;
    bool var2[var1 + 1];
    memset(var2, true, sizeof(var2));
    for (long long int var3 = 2; var3 * var3 <= var1; var3++)
        if (var2[var3] == true)

            for (long long int i = var3 * var3; i <= var1; i += var3)

                var2[i] = false;

    long long int var4 = 0;

    cin >> var4;

    while (var4--) 
	{

        long long int var5 = 2;
        long long int var6 = 0;
        cin >> var6;

        long long int var7[var6];
        for (long long int i = 0; i < var6; i++)
            cin >> var7[i];

        unordered_map<long long int, long long int> var8;
        for (long long int i = 0; i < var6; i++) {
            if (var8.find(var7[i]) == var8.end()) {
                while (var2[var5] == 0)
                    var5++;
                var8[var7[i]] = var5;
                var5++;
            }
        }
        for (long long int i = 0; i < var6; i++)
		
            cout << var8[var7[i]] << " ";



        cout << "\n";
    }
    return 0;
}

