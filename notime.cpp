#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,x,temp,flag=0;
    vector<int> vec;
    cin>>n>>h>>x;
    for(int i=1;i<=n;i++ )
    {
        cin>>temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    for(int j=0;j<n;j++)
    {
        if((vec[j]+x)>=h)
        {
            flag=1;
            break;
        }
    }
    cout<<flag?"YES":"NO";
    return 0;
}