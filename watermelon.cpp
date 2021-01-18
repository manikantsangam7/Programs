#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,sum=0;
        cin>>n;
        vector <int > vec;
        int k;
        for(int j=0;j<n;j++)
        {
            cin>>k;
            vec.push_back(k);
            sum+=k;
        }
        if(sum==0)
        cout<<"YES"<<endl;
        else if(n==1 && sum==0)
        {
            cout<<"YES"<<endl;
        }
        else if(n==2 && (sum==1 || sum==0))
        {
            cout<<"YES"<<endl;
        }
        else if(n>2)
        {
            
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}