#include<bits/stdc++.h>
using namespace std;

int main()
{
    // US Citizen
    // CA Resident: tuition = 0
    // Non Resident: tuition = 1000
    // Not a US Citizen: tuition = 3000

    bool isCitizen = true;
    bool caResident = true;
    short tuition = 0;
    
    //Outer if statement
    if(!isCitizen){
        //Inner if statement
        if(caResident) tuition = 0;
        else tuition = 1000;
    }
    else tuition = 3000;
    
    
    return 0;
}
