// do-while loop
# include <iostream>


using namespace std;
int sum = 0;
;

//function declaration
int calc(int length, int width, int area);

//main function
int main() {
    int rec1 = calc(5,6);
    int rec2 = calc(10,12);

}

//function that computes area
int calc(int length, int width){
    int area = (length * width);

    cout << "the area is " << area << endl;
    cout << "the width is " << width << endl;
    cout << "the length is " << length << endl;
}




