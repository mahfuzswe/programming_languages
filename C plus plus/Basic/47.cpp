#include<bits/stdc++.h>
using namespace std;

double claculateTax(double income, double expense, double taxRate=.2){
    return income * taxRate;
}

int main()
{
    double tax = claculateTax(10'000,.3);
    cout<<tax<<endl;
    
    return 0;
}
