#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sales = 25'000;

    if(sales<=10'000) cout<<"Commission: "<<"10%"<<endl;
    else if(sales>=10'000 && sales<=15'000) cout<<"Commission: "<<"15%"<<endl;
    else cout<<"Commission: "<<"20%"<<endl;
    
    
    return 0;
}
