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


# include <string>
# include <iostream>

using namespace std;

int main()
{
 // the pointers and variables are declared below
int i, j;
int *p, *q;
// the variable i is assigned to 100
i = 100;
// the address of i is assigned to p
p = &i;
// the address of j is assigned to q
q = &j;
// pointer variable q is assigned to the number stored in i
*q = i;
// the value pointed by p is added to the value pointed by q
*q = *p + *q;
// returns the value pointed by q
cout<<*q;
return 0;
}


// The output is then 200
