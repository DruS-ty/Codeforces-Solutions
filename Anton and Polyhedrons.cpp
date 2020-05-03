// Anton and Polyhedrons
#include<bits/stdc++.h>

using namespace std;

int main()
{  int n=0,a;
   cin>>a;
   string f;
   
   for(int i=0;i<a;i++)
   {
       cin>>f;
   if (f=="Tetrahedron")
   {
       n=n+4;
   }
   else if (f=="Cube")
   {
       n=n+6;
   }
   else if(f=="Octahedron")
   {
       n=n+8;
   }
   else if(f=="Dodecahedron")
   {
       n=n+12;
   }
   else if(f=="Icosahedron")
   {
       n=n+20;
   }
   }
   
   cout<<n;;
   return 0;
}
