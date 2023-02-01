#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age = 30;
    int salary = 50'000;
    bool isEligible = (age > 18 && age < 65) && (salary > 30'000);
    cout<<boolalpha<<isEligible;
    
    
    return 0;
}
