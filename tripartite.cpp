#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n],pr=1;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            pr*=a[j];
        }
        int r;
        cin>>r;
        cout<<pr+r<<endl;

    }
}