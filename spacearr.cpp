#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,flag=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int j=0;j<n;j++)
        {
            if(((j+1)-a[j])<0)
            {
                cout<<"Second"<<endl;
                flag=1;
                break;
            }
            else
                c+=(j+1)-a[j];
        }
        if(flag==0)
        {
            if(c%2==0)
            cout<<"Second"<<endl;
            else
            cout<<"First"<<endl;
        }
    }
    return 0;
}