#include<bits/stdc++.h>
using namespace std;

// void greet(string firstName, string lastName){
//     cout<<"Hello, "<<firstName<<" "<<lastName<<endl;
// }

void greet(string name){
    cout<<"Hello,"<<name<<endl;
}


string fullName(string firstName, string lastName){
    // Contatening (combining)
    return firstName + " " + lastName;
}

int main()
{
    //Calling - incvocking - executing
    //greet("Mahfuzur","Rahman");
    //string name = fullName("Mahfuzur","Rahman");
    //cout<<name<<endl;
    //greet(name);
    greet(fullName(" Mahfuzur","Rahman"));

    cout<<"Done\n";
    
    return 0;
}
