#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,input;
    cin>>n>>d;
    vector<int> vec ;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        vec.push_back(input);
    }
    int cur=0,pre=0,l=0,ans=0;
    if(cur+d==vec[0])
    ans++;
    pre=cur;
    cur=d;
    l=cur-pre;
    for(int j=1;j<n;j++)
    {
        if((cur+l-1)==vec[j])
        {

        }
        else if((cur+l)==vec[j])
        {

        }
        else if((cur+l+1)==vec[j])
        {

        }
        
    }


}