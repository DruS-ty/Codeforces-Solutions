//The New Year: Meeting Friends
#include<bits/stdc++.h>

using namespace std;

int main()
  { int c=0,d=0;
    vector<int> x(3);
   for(int i=0;i<3;i++)
   {
       cin>>x[i];
   }
   sort(x.begin(),x.end());
   c=x[1]-x[0];
   d=x[2]-x[1];
   cout<<c+d;

	return 0;
}
