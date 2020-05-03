//Hulk Codeforces
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string odd ="I love";
    string even ="I hate";
    
    cin>>n;
   for(int i=0;i<n;i++)
        { 
            if(i&1)
            {
                cout<<odd<<" ";
            }
            else
            {
                cout<<even<<" ";
            }
           
            if(i!=n-1)
            printf("that ");
            
        }
cout<<"it";        
            

        
    
    return 0;
}
