#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n,q,l,r,v;
        cin>>n>>q>>l>>r>>v;
        vector<int> vec(n,0);
        for(int j=1;j<=q;j++)
        {
            for(int k=l;k<=r;k++)
            {
                vec[k]+=v;
            }
        }
        cout<<accumulate(vec.begin(), vec.end(), 0)<<endl;
    }
}