#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,x,k,y;
        cin>>n>>k>>x>>y;
        int reach=0;
        if(y>n)
        reach=0;
        else
        {
            for(int j=1;j<=n;j++)
            {
                if((x+k*j)%n==y)
                {
                    reach=1;
                    break;
                }
            } 
        }
        if(reach==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}