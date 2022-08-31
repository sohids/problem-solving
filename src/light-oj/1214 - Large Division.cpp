#include <stdio.h>
#include <bits/stdc++.h>
typedef long long int ll;
 
using namespace std;
 
 
int main()
{
    int t,c= 0;
    ll b, length, l,i,tmp;
    string a;
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
    cin>>t;
    while(t)
    {
        i= 0, c++, tmp= 0;
 
        cin>>a;
        cin>>b;
       // cout<<"check";
        length = a.length();
 
        if(a[i] == '-')
                i++;
 
 
        while(i<length)
        {
            tmp = (tmp*10)+a[i]-'0';
            tmp = tmp%b;
            i++;
        }
        if(tmp)
            printf("Case %d: not divisible\n", c);
        else
            printf("Case %d: divisible\n",c);
 
        t--;
 
    }
 
 
 
 
 
 return 0;
}
 