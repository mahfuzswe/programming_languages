#include<bits/stdc++.h>
using namespace std;

int main()
{
    // ()
    // !
    // &&
    // ||
    
    bool a = true;
    bool b = false;
    bool c = false;
    //bool result = b && !a;
    //bool result = a || b && b && c;
    bool result = (a || b) && b && c;

    cout<<boolalpha<<result; 
    return 0;
}
