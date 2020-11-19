/**********author:iamhkr*********/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
vector<string> str;
int i=0,j=0;
for(i=0;i<n;i++)
{
    string s;
    cin>>s;
    str.push_back(s);
}

for(i=0;i<n;i++)
{
    bool ok=false;
    for(j=0;j<i;j++)
    {
        if(str[j]==str[i])
        {
            ok=true;
        }
    }
    cout<<(ok?"YES":"NO")<<endl;
    
}
}