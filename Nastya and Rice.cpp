//Nastya and Rice
#include<bits/stdc++.h>

using namespace std;

int main()
{  
    int t,n,a,b,c,d,x,y,u,v;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
    cin>>n>>a>>b>>c>>d;
    x=n*(a-b);
    y=n*(a+b);
    u=c-d;
    v=c+d;
    if((v>=x)&&(u<=y))
    {
        cout<<"YES\n";
    }
    else
    { 
        cout<<"NO\n";
    }
    }
	return 0;
}
