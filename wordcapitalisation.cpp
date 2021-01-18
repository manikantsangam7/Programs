#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int lower=0,upper=0;
    for(int i=0;i<str.length();i++)
    {
    if(str[i]>=97 && str[i]<=122)
	{
        lower++;
    }
    else
    {
        upper++;
    }
    }
    if(lower==upper || lower>upper)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout<<str;
    }
    else if(upper>lower)
    {
        transform(str.begin(),str.end(),str.begin(), ::toupper);
        cout<<str;
    }
}