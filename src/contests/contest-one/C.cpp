#include <bits/stdc++.h>
#define MAX 1000000
#define MOD 1000000007
#define BASE 29
#define ll long long

using namespace std;
ll pre_hash[MAX];
ll pre_hash_rev[MAX];
ll po[MAX];
void pre_calculate_hash(string &str) //O(n)
{
    po[0] = 1;
    for(int i = 1; i<str.size(); i++)
    {
        po[i] = (po[i-1]*BASE)%MOD;
    }
    pre_hash[0] = str[0]-'a'+1;
    pre_hash_rev[0] = str[0]-'a'+1;
    for(int i = 1; i<str.size(); i++)
    {
        pre_hash[i] = ((pre_hash[i-1]*BASE) + (str[i]-'a'+1))%MOD;
        pre_hash_rev[i] = ((pre_hash_rev[i-1]*BASE) + (str[i]-'a'+1))%MOD;
    }
}
ll get_hash(int L, int R) //O(1)
{
    if(!L)
        return pre_hash[R];
    return (pre_hash[R] - (pre_hash[L-1] * po[R-L+1] % MOD) + MOD)%MOD;
}
ll get_hash_rev(int L, int R) //O(1)
{
    if(!L)
        return pre_hash_rev[R];
    return (pre_hash_rev[R] - (pre_hash_rev[L-1] * po[R-L+1] % MOD) + MOD)%MOD;
}
ll get_str_hash(string &str)
{
    ll hash_of_t = 0;
    for(int i = 0; i<str.size(); i++)
    {
        hash_of_t = (hash_of_t * BASE + str[i]-'a' + 1) % MOD;
    }
    return hash_of_t;
}
bool check_pallindrome(string &str) //O(n/2) => O(n)
{
    int len = str.size() - 1;
    for(int i = 0; i<len; i++)
    {
        if(str[i] != str[len--])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "ababbba";
    string t = "bcb";

    //cout<<check_pallindrome(s)<<endl;

    //pre_calculate_hash(s);
    //cout<<get_hash(0, 6)<<endl;
    //cout<<get_hash_rev(0, 6)<<endl;


    int i;

    int si = s.size();

    while(si)
    {
        cout<<si<<" size: "<<s.size()- si+1<<endl;
        for(int i = 0; i<=s.size()- si; i++)
        {
            string sub = s.substr(i, si);
            cout<<sub<<" ";

            if(check_pallindrome(sub)) cout<<"pallindrome"<<endl;
            else cout<<"Not pallindrome"<<endl;

            /*if(get_hash(i, si + i - 1) == get_hash_rev(i, si + i - 1))
            {
                cout<<"pallindrome"<<endl;
            }
            else
            {
                cout<<"Not Pallindrome"<<endl;
            }
            */
            //cout<<get_hash_rev(i, si + i - 1);

            //cout<<get_str_hash(sub)<<endl;

        }
        si--;
    }

    return 0;
}
