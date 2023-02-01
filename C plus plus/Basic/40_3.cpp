#include<bits/stdc++.h>
using namespace std;

int main()
{
    int temp[] = {60,80,90};

    double sum = 0;
    for(int temp: temp) 
        sum+=temp;

    short count = sizeof(temp)/sizeof(int);
    double average = sum/count;

    cout<<average;
    
    
    return 0;
}
