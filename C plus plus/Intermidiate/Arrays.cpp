#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    cout<<"printing the array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"printing done"<<endl;
}


int main(){
    
    //declare
    // int number[15];

    // // accessing index
    // cout<<"value of index 5 : "<<number[5]<<endl;


    // int second[3] = {1,3,7};
    // cout<<"value of 2 index: "<<second[2]<<endl;

    // int third[15] = {2,11};

    // printArray(third,15);


    // int fourth[10] = {1};

    // // int n = 10;
    // cout<<"Printing the array: "<<endl;
    

    // //print the array
    // for(int i=0; i<10; i++){
    //     cout<<fourth[i]<<" ";
    // }cout<<endl;

    // int fifth[10] = {1};
    // int n = 10;
    // printArray(fifth,10);

    // int fifthSize = sizeof(fifth)/sizeof(int);
    // cout<<"size of fifth is :" <<fifthSize<<endl;

    char ch[5] = {'a','b','c','d','e'};
    cout<<ch[3]<<endl;

    cout<<"printing the array: "<<endl;
    for(int i=0; i<5; i++){
        cout<<ch[i]<<" ";
    }cout<<endl;
    cout<<"printing done"<<endl;

    cout<<endl<<"Everything is fine"<<endl<<endl;
    return 0;
}

