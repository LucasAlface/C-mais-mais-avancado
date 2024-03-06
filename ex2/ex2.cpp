#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

class MyClass {

    private:
        int year;

    public:
        int myNum;
        string myString;
        void myMethod () {
            cout << "kniga";
        }
};

int main() {
    MyClass myObj;

    myObj.myNum = 15;
    myObj.myString = "yippie";

    //myObj.year = 2024;

    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;
    myObj.myMethod();
    //cout << myObj.year << endl;

    return 0;
}
