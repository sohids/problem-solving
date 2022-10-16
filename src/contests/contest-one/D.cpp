#include <bits/stdc++.h>
#define MAX 1000000
#define MOD 1000000007
#define ll long long

using namespace std;

int f91(int n)
{
    if(n<=100)
        return f91(f91(n+11));
    else
        return n-10;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    while(cin>>n && n)
    {
        cout<<"f91("<<n<<") = "<<f91(n)<<endl;
    }

    return 0;
}
