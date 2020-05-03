//In Search of an Easy Problem
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,a[100];
   int e=0;
   int h=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==0)
   {
       e++;
   }
   else
   { 
      h++; 
   
   }
       
   }
   
   if(h>=1)
   {
       cout<<"HARD";
   }
   else
   {
       cout<<"EASY";
   }
       
   
   
return 0;
}
