#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(true){
        cout<<"Number: ";
        int number; 
        cin>>number;
        if(number >= 1 && number <=5 )
            break;
        cout<<"Error! Enter a numebr between 1 to 5"<<endl;
    }
    
    return 0;
}
