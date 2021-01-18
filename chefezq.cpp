#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n,k,sum=0,num,count=0;
        cin>>n>>k;
        vector<int> vec;
        for(int j=1;j<=n;j++)
        {
            cin>>num;
            vec.push_back(num);            
        }
        sum=vec[0];
        while (sum>=(k*(count+1)))
        {
            count++;
            if(count<n)
            {
            sum+=vec[count];
            }
            else
            {
                count+=(sum-(k*count))/k;
                break;
            }
        }
        cout<<count+1<<endl;
    }
    return 0;
}