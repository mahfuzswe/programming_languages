#include<bits/stdc++.h>
using namespace std;

// Global variable (global scope)
const double taxrate = .2;

double calculateTax(int sales){
    return sales*taxrate;
}

int main()
{
    //local variable (local scope)
    int sales = 10'000;
    //double taxrate = 0;
    double tax = calculateTax(sales);
    cout<<tax;
    
    return 0;
}
