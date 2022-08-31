#include <stdio.h>
#include <iostream>
#define MAX 10

using namespace std;
int main()
{
    int T;
    string str[MAX];
    int relevance[MAX];

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d", &T);
    for(int i = 0; i<T; i++)
    {
        int maxRelevance = -1;
        for(int j = 0; j<MAX; j++){
            cin>>str[j];
            cin>>relevance[j];

            if(relevance[j]>maxRelevance){
                maxRelevance = relevance[j];
            }

        }
        cout<<"Case #"<<i+1<<":"<<endl;
         for(int j = 0; j<MAX; j++){
            if(relevance[j] == maxRelevance){
                cout<<str[j]<<endl;
            }
        }
    }
    return 0;
}
