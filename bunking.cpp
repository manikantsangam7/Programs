#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        vector<int> vec;
        long long int n,input;
        cin>>n;
        for(int j=0;j<n-1;j++)
        {
            cin>>input;
            vec.push_back(input);
        }
        for(int k=1;k<=n;k++)
        {
            auto it = std::find (vec.begin(), vec.end(), k);
            if (it != vec.end())
            {
                continue;
            }
            else
            {
                cout<<k<<endl;
            }
            
        }
    }
}