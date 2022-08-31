#include <bits/stdc++.h>
#define MAX 1000000
#define MOD 1000000007
#define ll long long

using namespace std;

int big_mod(ll b, ll p, ll m)
{
    if(p == 0)
        return 1LL;
    if(p%2 == 0)
    {
        ll half = big_mod(b, p/2, m)%m;
        return (half * half) % m;
    }
    else
    {
        return b* big_mod(b, p-1, m)%m;
    }
}

int main()
{
    ll b, p, m;

    while(cin>>b>>p>>m)
    {
        cout<<big_mod(b, p, m)<<endl;
    }
    return 0;
}
