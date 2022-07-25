#include<iostream>
#include<iomanip>

using namespace std;

int main () {

    //   Manipulators in C++
    int a = 5, b = 34, c = 234, d = 4878;

    cout<<"The value a (without setw) is : "<< a <<endl; 
    cout<<"The value b (without setw) is : "<< b <<endl; 
    cout<<"The value c (without setw) is : "<< c <<endl; 
    cout<<"The value d (without setw) is : "<< d <<endl; 
    cout<<"The value a is : "<< setw(5) << a <<endl; 
    cout<<"The value b is : "<< setw(5) << b <<endl; 
    cout<<"The value c is : "<< setw(5) << c <<endl; 
    cout<<"The value d is : "<< setw(5) << d <<endl; 


    return 0;
}