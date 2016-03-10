// Queation 1
# include <string>
# include <iostream>

using namespace std;

int main(){
  

   // local variable declaration:
   int mark = 0;
 
    cout << "Please enter your average mark" << endl;
    cin >> mark;
   // check the boolean condition
   if( mark >= 50 )
   {
       // if condition is true then print the following
       cout << "Pass!" << endl;
   }
   else
   {
       // if condition is false then print the following
       cout << "Fail!" << endl;
   }
   return 0;
    
}



// Queation 2
# include <string>
# include <iostream>

using namespace std;

int main(){
  

   // local variable declaration:
   int hours = 0;
 
    cout << "Please enter the number of hours" << endl;
    cin >> hours;
   // check the boolean condition
   if( hours > 18 )
   {
       // if condition is true then print the following
       cout << "This is an overload!" << endl;
   }
   else
   {
       // if condition is false then print the following
       cout << "Not an overload" << endl;
   }
   return 0;
    
}

// Queation 3
# include <string>
# include <iostream>

using namespace std;

int main(){
  

   // local variable declaration:
   int temp = 0;
 
    cout << "What is the current tempereture?" << endl;
    cin >> temp;
   // check the boolean condition
   if ( temp < 50 )
   {
       // if condition is true then print the following
       cout << "Stay Inside" << endl;
   }
   else if ( temp>= 80 )
   {
       // if condition is false then print the following
       cout << "Go swimming" << endl;
   }
  
   else 
   {
       // if condition is false then print the following
       cout << "Go Running!" << endl;
   }
   return 0;
    
}

// Queation 4
# include <string>
# include <iostream>

using namespace std;

int main(){
  

   // local variable declaration:
   int numerator = 0;
   int denominator = 0;
   int answer = 0;
 
    cout << "Please enter a number?" << endl;
    cin >> numerator;

    cout << "And another one?" << endl;
    cin >> denominator;

   // check the boolean condition
   if( denominator == 0 )
   {
       // if condition is true then print the following
       cout << "Division by 0 is an illegal operation!" << endl;
   }
   else
   {
        answer = numerator/denominator;
       // if condition is false then print the following
       cout << answer << endl;
   }
   return 0;
    
}



// Queation 5
# include <string>
# include <iostream>

using namespace std;

int main(){
  

   // local variable declaration:
   int number = 0;
   int square = 0;
   int cube = 0;
 
    cout << "Please enter a number?" << endl;
    cin >> number;

   // check the boolean condition
   if( number > 180 )
   {
       // if condition is true then print the following
       cout << "***square is not allowed for numbers over 180***" << endl;
   }
   else
   {
    square = (number * number);
    cube = (number * number * number);
       cout << square << endl;
       cout << cube << endl;
   }
   return 0;
    
}

