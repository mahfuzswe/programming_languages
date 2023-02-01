#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"1- Create account"<<endl
        <<"2- Change password"<<endl
        <<"3- Quit"<<endl
        <<"Select an option: ";

    short input;
    cin>>input;

    if(input==1) cout<<"You selected 1";
    else if(input==2) cout<<"You selected 2";
    else cout<<"Good bye!";
    
    
    return 0;
}
