#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numbers[] = {1,2,3};

    //sizeof(numbers): 16
    //sizeof(int): 4
    for(int i=0; i<sizeof(numbers)/sizeof(int); i++){
        cout<<numbers[i]<<endl;
    }
    
    //Range based for loop
    for(int number: numbers)
    cout<<number<<endl;
    
    return 0;
}
