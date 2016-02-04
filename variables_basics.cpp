
// Question 1
#include <iostream>
	using namespace std;
	int main(){
		int b = 10;
		int h = 7;
	

		int area = (b*h)*0.5;
	

		cout << area;
		
		return 0;
	}
	


// Question 2
#include <iostream>
using namespace std;
int main()
{
	int b = 10;
	int h = 7;
	int hyp = 12;

	int area = 0.5*b*h;
	int peri = b+h+hyp;

	cout << "The area is  ";
	cout << area;
	cout << "  While the perimeter is ";
	cout << peri;

	return 0;
}

// Question 3
#include <iostream>
using namespace std;
int main(){
	int pur = 450000;
	int sol = 580000;

	int profit = sol - pur;

	cout << "The profit is  ";
	cout << profit;

	return 0;
}

// Question 4
#include <iostream>

using namespace std;
int main(){

	int born = 1954;
	int year = 2016;

	int age = year - born;

	cout << "Peters age is ";
	cout << age;

	return 0;
}

// Question 6
#include <iostream>

using namespace std;
int main(){

	float total = 20.0;
	float sons = 6.0;

	float land = total/sons;

	cout << "Each son should recieve ";
	cout << land;
	cout << "  Hectares of land ";

	return 0;
}
