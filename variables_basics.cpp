// Question 1
# include <iostream>

using namespace std;

int main(){
    int a = 0;
    int b = 0;

    cout << "Kindly input any 2 numbers ";
    cin >> a;
    cin >> b;

    int c = a/b;
    cout << "The division of the 2 numbers is ";
    cout << c;

    return 0;
}

// Question 2
# include <iostream>

using namespace std;

int main(){
    int a = 0;
    int b = 0;

    cout << "Kindly input any 2 numbers ";
    cin >> a;
    cin >> b;

    int c = a%b;
    cout << "The modulus of the 2 numbers is ";
    cout << c;

    return 0;
}

// Question 3
# include <iostream>

using namespace std;

int main(){
    float a = 0.0;
    float b = 0.0;

    cout << "Kindly input any 2 numbers ";
    cin >> a;
    cin >> b;

    float c = a * b;
    cout << "The product of the multiplication of the 2 numbers is ";
    cout << c;

    return 0;
}

// Question 4
# include <iostream>

using namespace std;

int main(){
    int a = 0;
    int b = 0;
    int d = 0;

    cout << "Kindly enter the base of the triangle ";
    cin >> a;
    cout << "And the height of course! ";
    cin >> b;
    cout << "Dont forget the hypotenuse! ";
    cin >> d;

    int c = (a*b)/2;
    cout << "The area of the triangle is \n ";
    cout << c ;

    int e = a + b + d;
    cout << "\n While the perimeter of the triangle is \n";
    cout << e;

    return 0;
}

// Question 5
# include <iostream>

using namespace std;

int main(){
    int a = 0;
    int b = 0;

    cout << "Kindly input your year of birth ";
    cin >> a;
    cout << "What year is it? ";
    cin >> b;

    int c = b - a;
    cout << "Your age is ";
    cout << c;

    return 0;
}

// Question 6
# include <iostream>

using namespace std;

int main(){
    float a = 0.00;
    float b = 0.00;

    cout << "Please input the radius of your cylinder in centimers ";
    cin >> a;
    cout << "And its height in centimeters ";
    cin >> b;

    double c = (3.14 * (a*a) * b);
    cout << "The volume of you cylinder is ";
    cout << c;

    return 0;
}

// Question 7
# include <iostream>

using namespace std;

int main(){
    string a;
    string b;

    cout << "What is you first name? ";
    cin >>  a;
    cout << "What is your second name? ";
    cin >> b;

    cout << "Welcome ";
    cout << a;
    cout << b;

    return 0;
}

/// Question 8

# include <string>
# include <iostream>

using namespace std;

int main(){
    string a;
    string b;
	string c;
	int d;

    cout << "What is you first name? ";
    cin >>  a;
    cout << "And your University? ";
    cin >> b;
	cout << "What course are you pursuing? ";
    cin >> c;
	cout << "What year of study are you in? ";
    cin >> d;


    cout << "First Name       ";
    cout << a;
	cout << "\nUniversity       ";
    cout << b;
    cout << "\nCourse of study  ";
    cout << c;
    cout << "\nYear of study    ";
    cout << d;
 
 
	system("pause");
    return 0;
}



// Question 9

# include <iostream>

using namespace std;

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
   


    cout << "Input 3 different integers please ";
    cin >> a;
    cin >> b;
    cin >> c;

    int d = a + b+ c;
    cout << "The sum is  ";
    cout << d ;cout <<endl;

    int e = (a + b + c)/3;
    cout << "The average is  ";
    cout << e;cout <<endl;

    int f = a * b * c;
    cout << "The product is  ";
    cout << f ;cout <<endl;

    return 0;
}
