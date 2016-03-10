// Queation 1
# include <string>
# include <iostream>

using namespace std;

int main(){
  

   // local variable declaration:
   int age = 0;
 
    cout << "Please enter your age" << endl;
    cin >> age;
   // check the boolean condition
   if( age < 18 )
   {
       // if condition is true then print the following
       cout << "You are not eligible to vote" << endl;
   }
   else
   {
       // if condition is false then print the following
       cout << "You can vote!" << endl;
   }
   return 0;
    
}


// Queation 2
# include <string>
# include <iostream>

using namespace std;

int main(){
  

   // local variable declaration:
   int year = 0;
 
    cout << "What year is it?" << endl;
    cin >> year;
   // check the boolean condition
   if( year % 4 == 0 )
   {
       // if condition is true then print the following
       cout << "This is a leap year" << endl;
   }
   else
   {
       // if condition is false then print the following
       cout << "This is not a leap year!" << endl;
   }
   return 0;
    
}


// Queation 3
# include <string>
# include <iostream>

using namespace std;

int main(){
  

   // local variable declaration:
   int number = 0;
 
    cout << "Please enter a number?" << endl;
    cin >> number;
   // check the boolean condition
   if( number % 2 == 0 )
   {
       // if condition is true then print the following
       cout << "This is an even number" << endl;
   }
   else
   {
       // if condition is false then print the following
       cout << "This is an odd number!" << endl;
   }
   return 0;
    
}


// Queation 4
# include <string>
# include <iostream>

using namespace std;

int main(){
    

   // local variable declaration:
   int cost = 0;
   int discount = 0;
 
    cout << "Please enter the total cost?" << endl;
    cin >> cost;
   // check the boolean condition
   if( cost > 30000 )
   {
       discount = (0.1 * cost);
       // if condition is true then print the following
       cout << "You will recieve a discount of "; cout << discount; cout << "!" << endl;
   }
   else
   {
      discount = (0.02 * cost);
       // if condition is false then print the following
      cout << "You will recieve a discount of "; cout << discount; cout << "!" << endl;
   }
   return 0;
    
}



// Queation 5
# include <string>
# include <iostream>

using namespace std;

int main(){
  

   // local variable declaration:
   double number = 0;
 
    cout << "Please enter a number?" << endl;
    cin >> number;
   // check the boolean condition
   if( number < 0)
   {
       // if condition is true then print the following
       cout << "This is a negative number" << endl;
   }
   else
   {
       // if condition is false then print the following
       cout << "This is a positive number!" << endl;
   }
   return 0;
    
}