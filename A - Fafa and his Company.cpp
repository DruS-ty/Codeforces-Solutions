//Fafa and his Company
 
#include<bits/stdc++.h>
 
using namespace std;
int main()
{
  long long n,l=0;
  cin>>n;
  for(int i=1;i<n;i++)
  {
  	if(n%i==0)
	  {
	  	l++;
	  }
  }
  cout<<l;
    return 0;
 
}
