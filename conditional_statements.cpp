// Queation 2
# include <string>
# include <iostream>

using namespace std;

int main(){


    // local variable declaration:
    string name;
    int gpa = 0;

    cout << "Whats your gpa?" << endl;
    cin >> gpa;

    // check the boolean condition
    if( gpa >= 3.5 )
    {
        cout << "You have made the deans list"<< endl;
    }
    else if(gpa >= 2.0)
    {

        // if condition is true then print the following
        cout << "Your gpa is o.k"<< endl;
    }
    else{

        // if condition is true then print the following
        cout << "Go see the course administrator"<< endl;

    }
    return 0;

}

// Queation 1
# include <string>
# include <iostream>

using namespace std;

int main(){


    // local variable declaration:
    string name;
    int sales = 0;
    int commision = 0;

    cout << "Whats your name?" << endl;
    cin >> name;

    cout << "What are your total sales?" << endl;
    cin >> sales;

    // check the boolean condition
    if( sales > 120000 )
    {
        commision = (0.1*sales);
        // if condition is true then print the following
        cout << "Name: "; cout << name << endl;
        cout << "Monthly Sales: "; cout << sales << endl;
        cout << "Commision: " ; cout << commision << endl;
    }
    else if((sales >= 20000) && (sales <= 80000))
    {
        commision = (0.02*sales);
        // if condition is true then print the following
        // if condition is true then print the following
        cout << "Name: "; cout << name << endl;
        cout << "Monthly Sales: "; cout << sales << endl;
        cout << "Commision: " ; cout << commision << endl;
    }
    else if ((sales > 80000) && (sales <= 120000)){
        commision= (0.05*sales);
        // if condition is true then print the following
        // if condition is true then print the following
        cout << "Name: "; cout << name << endl;
        cout << "Monthly Sales: "; cout << sales << endl;
        cout << "Commision: " ; cout << commision << endl;

    }
    return 0;

}


// Queation 3
# include <string>
# include <iostream>

using namespace std;

int main() {


    // local variable declaration:
    string name;
    int number = 0;

    cout << "Please give a number?" << endl;
    cin >> number;


    if (((number > 14) && (number < 72)) || (number > 103)) {
        // if condition is true then print the following
        cout << "Good";
    }
    else {
        cout << "Bad";
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
    int accidents = 0;
    int age = 0;

    cout << "How old are you?" << endl;
    cin >> age;

    cout << "how many accidents have you had?" << endl;
    cin >> accidents;

    if (age < 25 ){
        // check the boolean condition
        if( accidents = 1 )
        {
            int surcharge = 4250;
            int insurance = 20000;
            int age_charge = 8000;
            int total = surcharge+insurance+age_charge;
            cout << "Your insurance premium is: "; cout << total << endl;
        }

        else if(accidents = 2)
        {
            int surcharge = 10650;
            int insurance = 20000;
            int age_charge = 8000;
            int total = surcharge+insurance+age_charge;
            cout << "Your insurance premium is: "; cout << total << endl;
        }
        else if (accidents = 3)
        {
            int surcharge = 19100;
            int insurance = 20000;
            int age_charge = 8000;
            int total = surcharge+insurance+age_charge;
            cout << "Your insurance premium is: "; cout << total << endl;

        }
        else
        {
            cout << "No insurance!" << endl;
        }
    }
    else {
        // check the boolean condition
        if (accidents = 1) {
            int surcharge = 4250;
            int insurance = 20000;
            int age_charge = 0;
            int total = surcharge + insurance + age_charge;
            cout << "Your insurance premium is: ";
            cout << total << endl;
        }

        else if (accidents = 2) {
            int surcharge = 10650;
            int insurance = 20000;
            int age_charge = 0;
            int total = surcharge + insurance + age_charge;
            cout << "Your insurance premium is: ";
            cout << total << endl;
        }
        else if (accidents = 3) {
            int surcharge = 19100;
            int insurance = 20000;
            int age_charge = 0;
            int total = surcharge + insurance + age_charge;
            cout << "Your insurance premium is: ";
            cout << total << endl;

        }
        else {
            cout << "No insurance!" << endl;
        }
        return 0;
    }

}