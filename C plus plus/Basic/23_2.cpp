
//Write a program for rolling dice.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    const short minValue = 1;
    const short maxValue = 6;

    srand(time(0));
    int number = (rand() % (maxValue - minValue+1)) + minValue;
    cout<<number;

    // formula: [rand() % (maxValue - minValue + 1)] + minValue
    
    
    return 0;
}
