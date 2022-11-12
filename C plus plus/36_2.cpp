#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter two values: ";
    int first, second;
    cin>>first>>second;
    int result;

    if(first>second) result = first;
    else result = second;

    cout<<result<<endl;
    
    return 0;
}
