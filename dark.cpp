#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int input;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        vec.push_back(input);
    }
    int query;
    cin>>query;
    for(int j=1;j<=query;j++)
    {
        string s; 
        long long int l,r;
        cin>>s>>l>>r;
        if(s=="past")
        {
            vec[r-1]+=l;
        }
        else if(s=="present")
        {
            long long int sum=0;
            for(int k=l-1;k<=r-1;k++)
            {
                sum+=vec[k];
            }
            cout<<sum<<endl;
        }  
    }
}