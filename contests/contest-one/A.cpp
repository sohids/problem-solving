#include <bits/stdc++.h>
#define MAX 1000000
#define MOD 1000000007
#define ll long long
#define BASE 29

using namespace std;

ll pre_hash[MAX+1];
ll po[MAX+1];

void pre_calculate_hash(string &str) //O(n)
{
    po[0] = 1;
    for(int i = 1; i<str.size(); i++)
    {
        po[i] = (po[i-1] * BASE) % MOD;
    }
    pre_hash[0] = str[0] - 'a' + 1;
    for(int i = 1; i<str.size(); i++)
    {
        pre_hash[i] = ((pre_hash[i-1] * BASE) + (str[i] -'a' + 1))%MOD;
    }
}
ll get_hash(int L, int R) //O(1)
{
    if(!L)
        return pre_hash[R];
    return (pre_hash[R] - (pre_hash[L-1] * po[R-L+1] % MOD) + MOD) % MOD;
}
ll get_str_hash(string &str)
{
    ll hash_of_t = 0;
    for(int i = 0; i<str.size(); i++)
    {
        hash_of_t = (hash_of_t * BASE + (str[i]-'a'+1))%MOD;
    }
    return hash_of_t;
}

int main()
{
    string A, B;
    int T;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin>>T;

    for(int j = 1; j<=T; j++)
    {
        cin>>A;
        cin>>B;

        pre_calculate_hash(A);

        ll substrHash = get_str_hash(B);
        int cnt = 0;
        for(int i = 0; i<=A.size()-B.size(); i++)
        {
            if(substrHash == get_hash(i, B.size()+i-1))
            {
                cnt++;
            }
        }
        cout<<"Case "<<j<<": "<<cnt<<endl;
    }

    return 0;
}
