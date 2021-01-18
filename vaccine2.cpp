#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,d;
        cin>>n>>d;
        int a[n],count=0,ans=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]>=80 || a[j]<=9)
            count++;
        }
    ans=ceil((double)count/(double)d);
    ans+=ceil((double)(n-count)/(double)d);
    cout<<ans<<endl;
    }
    return 0;
}