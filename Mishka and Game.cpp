// Mishka and Game
#include<bits/stdc++.h>

using namespace std;

int main()
{  int n,m,c,x=0,y=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>m>>c;
       if(m>c)
       {
           x++;
       }
       else if(c>m)
       {
           y++;
       }
   }
   if(x>y)
   {
       cout<<"Mishka";
   }
   else if(y>x)
   {
       cout<<"Chris";
   }
   else if(x==y)
   {
       cout<<"Friendship is magic!^^";
   }
    return 0;
}
