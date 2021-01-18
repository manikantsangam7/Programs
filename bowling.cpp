#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n,k,l;
        cin>>n>>k>>l;
        if((n>k*l) || (k==1 && n>1))
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                count++;
                cout<<count<<" ";
                if(count>=k)
                {
                    count=0;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}