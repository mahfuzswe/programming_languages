#include<bits/stdc++.h>
using namespace std;

int main(){

    double sales = 95000;
    double state_tax = (sales*4)/100;
    double county_tax = (sales*2)/100;
    double total_tax = state_tax + county_tax;

    cout<<"sales = $"<<sales<<endl;
    cout<<"state_tax = $"<<state_tax<<endl;
    cout<<"county_tax = $"<<county_tax<<endl;
    cout<<"total_tax = $"<<total_tax<<endl;


    return 0;
}