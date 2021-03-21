#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[10],sum;
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
        }
        cin>>sum;
        if(sum!=0)
        {
            int j=9;
            while(sum!=0 && j>=0)
            {
                if(a[j]<=sum)
                {
                    sum-=a[j];
                    a[j]=0;
                }
                j--;
            }
        }
        for(int k=9;k>=0;k--)
            {
                if(a[k]!=0)
                {
                    cout<<k+1<<endl;
                    break;
                }
            }
    }
    return 0;
}