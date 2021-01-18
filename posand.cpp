#include<bits/stdc++.h>
using namespace std;
int other(int x)
{
    if(x==0)
    return false;
    return (log10(x) / log10(2));
}
int another(int n)
{
    return (ceil(log2(n))==floor(log2(n)));
}
int main()
{
int t;
cin>>t;
for(int j=0;j<t;j++)
{
    int n;
    cin>>n;
    list <int> g;
    if(n==1)
    {
        g.push_back(1);
    }
    if(another(n) && (n!=1))
    {
        cout<<"-1"<<endl;
    }
    if(n>=3)
    {
        g.push_back(2);
        g.push_back(3);
        g.push_back(1);
    }
    if(n>3 && (!(another(n))))
    {
        int i=4;
        while(i<=n)
        {
            if(another(i))
            {
                g.push_back(i+1);
                g.push_back(i);
                i=i+2;
            }
            else
            g.push_back(i);
            i++;
        }
    }
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n';
}
}