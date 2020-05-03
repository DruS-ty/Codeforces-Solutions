// Anton and Danik
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    int a=0,d=0;
    char g[n];
    scanf("%s",g);
    for(int i=0;i<n;i++)
    {
        if(g[i]=='A')
        {
            a++;
        }
        else if(g[i]=='D')
        {
            d++;
        }
    }
    if(a>d)
    {
        cout<<"Anton";
    }
    else if(d>a)
    {
        cout<<"Danik";
    }
    else if(a==d)
    {
        cout<<"Friendship";
    }
    
return 0;
}

