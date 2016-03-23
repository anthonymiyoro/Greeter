// do-while loop
# include <iostream>
# include <string>

using namespace std;
int sum = 0;
int main(){
//    for loop starts here
    for ( int x=2; x<=5; x=x+1 )
    {
        sum = sum + x;

    }
    cout << sum << endl;
}

//or

// do-while loop
# include <iostream>
# include <string>

using namespace std;
int sum = 0;
int x=2;
int main(){
//    for loop starts here
    for ( ; x<=5; x=x+1 )
    {
        sum = sum + x;

    }
    cout << sum << endl;
}
