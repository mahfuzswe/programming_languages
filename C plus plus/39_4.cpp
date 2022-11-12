#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter a positive numebr: ";
    int n; cin>>n;

    if(n<0) cout<<"Error! Number is not positive.";
    else{
       int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    cout<<"The factorial of "<<n<<": ";
    cout<<fact<<endl; 
    }

    return 0;
}
