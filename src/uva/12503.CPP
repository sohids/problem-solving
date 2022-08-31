#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int ROBOT;
char atDemo(int position)
{
    if(position == 0){
        ROBOT--;
    }
    else if(position == 1){
        ROBOT++;
    }
    else{
        
    }
}

int main()
{
    int T, numberOfInstructions, trace[200];
    string instruction;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        ROBOT = 0;
        cin >> numberOfInstructions;
        cin.ignore();
        for (int j = 0; j < numberOfInstructions; j++)
        {
            getline(cin, instruction);
            if (instruction.compare("LEFT") == 0)
            {
                ROBOT--;
                trace[j] = 0;
            }
            else if (instruction.compare("RIGHT") == 0)
            {
                ROBOT++;
                trace[j] = 1;
            }
            else
            {
                //cout << instruction.at(8);
                int position = instruction.at(8);
                trace[j] = position;
            }
        }
    }
    return 0;
}
