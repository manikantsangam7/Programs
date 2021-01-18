#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<4)
    cout<<"Invalid Input";
    else
    {
    float a[n];
    for(int t=0;t<n;t++)
    {
        cin>>a[t];
    }
    int i,j,current,pos;
    for(int i=1;i<n;i++)
    {
        current=a[i];
        pos=0;
        while((pos<i)&&(a[pos]<=current))
            pos++;
        if(pos!=i)
        {
            for(j=i;j>=pos;j--)
            {
                a[j+1]=a[j];
            }
            a[pos]=current;
        }
    }
    int c=0;
    for(int k=0;k<4;k++)
    {
        if(a[k]>0)
        {
            c++;
        }
    }
    if(c==4)
    cout<<a[0]*a[1]*a[2]*a[3];
    else
    cout<<"Invalid Input";
    }
}