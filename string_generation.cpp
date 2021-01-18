#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k,j;
        cin>>n>>k;
        for(j=0;j<k;j++)
        {
            cout<<"a";
        }
        int m=98;
        for(j=k;j<n;j++)
        {
          cout<<(char)(m);
          m++;
          if(m==123)
          m=97;
        }
        cout<<endl;
    }
}