#include <bits/stdc++.h>
#define MAX 1000000
#define MOD 1000000007
#define ll long long
#define BASE 29
#define intt  long long int


using namespace std;


int main()
{
///Copied

    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--)
    {
        ll x,n;
        cin>>x>>n;

        if(x%2)
        {
            ll rem = n % 4;

            if(!rem)
                cout<<x<<'\n';

            else if(rem == 1)
            {
                cout<< n+x <<'\n';
            }
            else if(rem == 2)
            {
                cout<<x - 1<<'\n';
            }
            else if(rem == 3)
            {
                cout<<x - 1 - n<<'\n';
            }
        }
        else
        {
            ll rem=n%4;

            if(!rem)
                cout<<x<<'\n';
            else if(rem==1)
            {
                cout<<x-n<<'\n';
            }
            else if(rem==2)
            {
                cout<<x+1<<'\n';
            }
            else if(rem==3)
            {
                cout<<x+1+n<<'\n';
            }
        }
    }

    return 0;
}

