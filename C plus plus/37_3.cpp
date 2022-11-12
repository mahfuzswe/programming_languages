#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter two numbers: ";
    int first, second;
    cin>>first>>second;

    cout<<"Enter an operator: ";
    char op;
    cin>>op;

    switch(op){
        case '+': cout<<first + second;
            break;
        case '-': cout<<first - second;
            break;
        case '*': cout<<first * second;
            break;
        case '/': cout<<first / second;
            break;
        case '%': cout<<first % second;
            break;
        default: cout<<"Invalid operator"<<endl;
    }
    
    return 0;
}
