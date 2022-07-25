#include<iostream>

using namespace std;

int main() {
    int a = 3;
    int* b = &a;
    // & ---> (Address of) operator

    cout<<"The address of a is : "<<&a<<endl;
    cout<<"The address of a is : "<<b<<endl;    //  'a' er address pointer deyar karone 'b' er moddhe stored hoiche

    // * ---> (value at) Dereference operator

    cout<<"The value at address b is : "<<*b<<endl;

    int** c = &b;

    cout<<"The address of b is : "<<&b<<endl;
    cout<<"The address of b is : "<<c<<endl;
    cout<<"The value at address c is : "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is : "<<**c<<endl;


    return 0;
}