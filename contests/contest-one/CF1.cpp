#include <bits/stdc++.h>
#define MAX 1000000
#define MOD 1000000007
#define ll long long
#define BASE 29

using namespace std;

int findPosition(string kyb, char ch)
{
    for(int i = 0; i<kyb.size(); i++)
    {
        if(kyb[i] == ch)
            return i+1;
    }
}

int main()
{
    int t;
    string keyboard, word;

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>keyboard;
        cin>>word;
        int total= 0;
        for(int i = 0; i<word.size()-1; i++)
        {
            int from = findPosition(keyboard, word[i]);
            int to = findPosition(keyboard, word[i+1]);
            total += abs(from-to);
        }
        cout<<total<<endl;
    }


    return 0;
}
