#include<bits/stdc++.h>
using namespace std;

int main()
{
    string street;
    cout<<"Enter your street: ";
    getline(cin,street);

    string city;
    cout<<"Enter your city: ";
    getline(cin,city);

    string state;
    cout<<"Enter your state: ";
    getline(cin,state);

    int zipCode;
    cout<<"Enter your zip code: ";
    cin>>zipCode;

    cout<<"Users Address: "<<endl;
    cout<<street<<endl;
    cout<<city<<','<<state<<','<<zipCode<<endl;
    
    return 0;
}
