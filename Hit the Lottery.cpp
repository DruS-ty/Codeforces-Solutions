// Hit the lottery
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m=0;
    cin>>n;
    
    while(n!=0)
    {
        if(n>=100)
        {
            m++;
            n=n-100;
        }
        else if(n>=20)
        {
            m++;
            n=n-20;
        }
        else if(n>=10)
        {
            m++;
            n=n-10;
        }
        else if(n>=5)
        {
            m++;
            n=n-5;
        }
        else if(n>=1)
        {
            m++;
            n=n-1;
        }
    }
    cout<<m;
return 0;
}
    
