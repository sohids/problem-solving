#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int N, B, H, W, P, bedCost, bed, minimalCost;
    bool isSufficientBed;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    while (cin >> N >> B >> H >> W)
    {
        minimalCost = B + 1;
        for (int i = 0; i < H; i++)
        {
            isSufficientBed = true;
            cin >> P;
            bedCost = P * N;

            for (int j = 0; j < W; j++)
            {
                cin >> bed;
                if (bed < N)
                {
                    isSufficientBed = false;
                }
            }
            if (isSufficientBed && bedCost < minimalCost)
            {
                minimalCost = bedCost;
            }
        }
        if (minimalCost <= B)
        {
            cout << bedCost << endl;
        }
        else
        {
            cout << "stay home" << endl;
        }
    }
    return 0;
}
