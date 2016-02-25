// pro1.cpp : Defines the entry point for the console application.
//
# include <string>
# include <iostream>

using namespace std;

int main(){
    int x,y,z;
    int *p,*q,*r;


    cout << "Kindly enter in 3 numbers ";
    cin >> x;
    cin >> y;
    cin >> z;

    // set the numbers to their addresses
    p = &x;
    q = &y;
    r = &z;

    cout << "P is "<< p << endl;
    cout << "q is "<< q << endl;
    cout << "r is "<< r << endl;
    cout << "*p is "<< *p << endl;
    cout << "*q is "<< *q << endl;
    cout << "*r is "<< *r << endl;
    cout << "x is "<< x<< endl;
    cout << "y is "<< y << endl;
        cout << "z is "<< z << endl;
    return 0;
}
