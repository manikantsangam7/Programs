#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,m;
        cin>>n>>m;
        long long int g[n],l[n],mod[m];
        for(int j=0;j<n;j++)
        {
            cin>>g[j];
        }
        for(int j=0;j<n;j++)
        {
            cin>>l[j];
        }
        for(int j=0;j<m;j++)
        {
            cin>>mod[j];
        }
        int compare=1;
        label:
        int j=0,product=1,max=-1;
        while(j<n && compare<=m)
        {
            if(g[j]==compare)
            {
                product*=l[j];
                if(product%mod[compare-1]>max)
                {
                    max=product%mod[compare-1];
                }
            }
            j++;
        }
        cout<<max<<" ";
        if(compare<m)
        {
            compare++;
            goto label;
        }
        cout<<endl;
    }
}