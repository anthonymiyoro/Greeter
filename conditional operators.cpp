// do-while loop
# include <iostream>
# include <string>

using namespace std;
int sum = 0;
int num1 =0;
int num2 = 0;
int ans = 0;

int main(){
    cout << "Please give me 2 numbers?";
    cin >> num1;
    cin >> num2;

    cout << "Press 1 to add these numbers or anything else to multiply these numbers";
    cin >> sum;

    switch (sum){
        case 1: // if the user presses 1
            ans = num1 + num2;
            cout << ans;
            break; // stops the loop

        default: // if the user presses anything else
            ans = num1 * num2;
            cout << ans;
            break; // stops the loop
    }
}

