#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

class Matematica {

    private: // atributos
        int num1;
        int num2;


    public: // métodos GET e SET
        void setNum1 (int x) {
            this->num1 = x;
        }
        int getNum1 (int x) {
            return this->num1;
        }

    public: // métodos
        int somar (int numX, int numY) {
            return numX + numY;
        }
        int subtrair (int numX, int numY) {
            return numX - numY;
        }
        int multiplicar (int numX, int numY) {
            return numX * numY;
        }
        float dividir (int numX, int numY) {
            return ((float) numX / (float)numY);
        }


};

int main() {
    Matematica myObj;

    myObj.setNum1 (5);
    cout << myObj.getNum1() << endl;

    cout << myObj.somar(2, 3);
    cout << endl << myObj.subtrair(2, 3);
    cout << endl << myObj.multiplicar(2, 3);
    cout << endl << myObj.dividir(2, 3);


    //cout << endl << Matematica::dividir(2, 3); // :: vai buscar o método diretamente

    return 0;
}
