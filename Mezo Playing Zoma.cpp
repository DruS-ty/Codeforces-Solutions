//Mezo Playing Zoma
#include<bits/stdc++.h>

using namespace std;

int main()
{
  int x=0,y=0,z=0;
  long long n;
  cin>>n;
  char s[n];
  scanf("%s",s);
  for(int i=0;i<n;i++)
  {
      if(s[i]=='L')
      {
          x=x-1;
      }
      else if(s[i]=='R')
      {
          y=y+1;
      }
  }
  for(int j=x;j<=y;j++)
  {
      z++;
  }
  cout<<z;
return 0;
}

