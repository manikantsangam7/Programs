#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       long long int a,b,j,k,l,m,ans=0;
       cin>>a>>b;
       j=a/2;
       l=a-j;
       k=b/2;
       m=b-k;
       ans=j*k+l*m;
       cout<<ans<<endl;
    }
    return 0;
}
