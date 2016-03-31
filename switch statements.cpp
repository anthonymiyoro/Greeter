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
// pointer variable q is assigned to the number stored in i, q then becoms 100
*q = i;
// the value pointed by p is added to the value pointed by q
*q = *p + *q;
// returns the value pointed by q
cout<<*q;
return 0;
}


// The output is then 200


// pro1.cpp : Defines the entry point for the console application.
//
# include <string>
# include <iostream>

using namespace std;

int main(){
 // the pointers and variables are declared below 
int z, x,w;
int *ip1, *ip2,*fp;
 // the address of z is assigned to ip1
 ip1 = &z;
 // the address of x is assigned to ip2
 ip2 = &x;
 // the address of w is assigned to fp
    fp=&w;

// since the addresses of z and w had been given to ip1 and fp respectively 
// the output is
// 0x7d15f1fd1428
// 0x7d15f1fd142c
// 116
// 200
 
*ip1 = 200;
 *fp = 116;
 
cout<<ip1<<endl;
cout<<ip2<<endl;
 cout<< w<<endl;
 cout<< z<<endl;

}


// pro1.cpp : Defines the entry point for the console application.
//
# include <string>
# include <iostream>

using namespace std;

int main(){
	int value1;
	int value2;
    int *longPtr;

    value1 = 20000;

    longPtr = &value1;
    // answer for c
    cout << *longPtr<<endl;
    // answer for e
    cout << longPtr<<endl;
    value2  = *longPtr;
    // answer for f
    cout << *longPtr<<endl;
    // answer for g
    cout << longPtr<<endl;

    return 0;
}
