#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main()
{
    int t,i, n,x, j;
    cin>>t;
 
 
for(j= 1;j<=t;j++)
   {
     int total= 0;
 
     cin>>n;
      for(i= 0;i<n;i++)
      {
          cin>>x;
          if(x>=0)
            total+= x;
 
      }
 
      cout<<"Case "<<j<<": "<<total<<endl;
   }
 
 
 
 return 0;
}
 