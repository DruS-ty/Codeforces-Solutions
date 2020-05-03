//Gennady and a Card Game
 
#include<bits/stdc++.h>
 
using namespace std;
int main()
{
string a,b;
int n=0;
 
cin>>a;
for(int i=0;i<5;i++)
    {
		cin>>b;
		if((a[0]==b[0])||(a[1]==b[1]))
		{
			n++;
			break;
		}
		
	}
	if(n>0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
    return 0;
 
}

