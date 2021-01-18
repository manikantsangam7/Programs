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
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int count=0,check=0,yes=0;
        for(int j=n-1;j>=0;j--)
        {
            if(a[j]==0 && a[j-1]==0 && a[j-2]==0)
            {
                yes=1;
                check=1;
                break;
            }
            else if(a[j]==0 && a[j-1]==0)
            {
                yes=0;
                check=1;
                break;
            }
            else if(a[j]==0)
            {
                yes=1;
                check=1;
                break;
            }
        }
        if(check==0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            if(yes==1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
            
        }
        

    }
}