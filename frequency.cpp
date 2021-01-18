#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        unordered_map<int, int> mp;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            mp[a[j]]++;
        }
        int big=-1, sbig=-1,cbig=10002,csbig=10002;
        for(int j=0;j<n;j++)
        {
            if(mp[a[j]]>=big)        //checking for bigest value
            {
                big=mp[a[j]];
                if(a[j]<cbig)
                {
                    cbig=a[j];
                }  
            }
            else if(mp[a[j]]>=sbig && mp[a[j]]<big)
            {
                sbig=mp[a[j]];
                if(a[j]<csbig)
                {
                    csbig=a[j];
                }
            }
        }
        cout<<min(cbig,csbig)<<endl;  
    }
}