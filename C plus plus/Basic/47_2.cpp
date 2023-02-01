#include<bits/stdc++.h>
using namespace std;

void greet(string name){
    cout<<"Hello, "<<name;
}

// Signature = name + (number and type of parameters)
void greet(string title,string name){
    cout<<"Hello, "<<title<<" "<<name;
}

int main()
{
    greet("Mr.","Shanto");
    
    return 0;
}
