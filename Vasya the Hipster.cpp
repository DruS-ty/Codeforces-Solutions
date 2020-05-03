// Vasya the Hipster
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a,b,c;
   cin>>a>>b;
   if(a>b)
   {
       a=a-b;
       c=a/2;
       cout<<b<<"  "<<c;
       
       
   }
   else if(a<b)
   {
       b=b-a;
       c=b/2;
       cout<<a<<"  "<<c;
   }
   else
   {
       cout<<a<<" "<<0;
   }
   
       
return 0;
}

