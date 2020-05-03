// Restoring Three Numbers
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c,d;
    vector<int> v(4);
    for(int i=0;i<4;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    
    a=v[3]-v[2];
    b=v[3]-v[1];
    c=v[3]-v[0];
    d=(v[0]+v[1]+v[2])/2;
    
    cout<<a<<" "<<b<<" "<<c;
   
return 0;
}
    
