#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool isCitizen = true;
    bool hasBachelorDegree = true;
    short yearsOfExprience = 1;

    bool isEligible = isCitizen && (hasBachelorDegree || yearsOfExprience>=2);

    cout<<boolalpha<<isEligible;
    
    
    return 0;
}
