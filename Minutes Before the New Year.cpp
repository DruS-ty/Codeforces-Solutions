// Minutes Before the New Year
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t,h,m;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       cin>>h>>m;
       h=h+1;
       h=24-h;
       h=h*60;
       m=60-m;
       m=m+h;
       cout<<m<<"\n";
   }
return 0;
}

