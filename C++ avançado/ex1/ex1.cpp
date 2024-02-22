#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

const int numAutocarros = 26;

int res = 0;

struct bus {
    string linha;
    string trajeto;
    int capacidade;
    string horas;
    string condutor;
};

void painel() {

}

void pedirelemento (bus autocarros[numAutocarros], int numAutocarro) {

    //system("cls");

    string aux = "";
    bool linhaOK;

    do {
    linhaOK = true;
    fflush(stdin);
    cout << "\n\n Qual a LINHA do autocarro: ";
    //getline(cin,autocarros[numAutocarro].linha);
    getline(cin,aux); // verifica a linha inteira

    for (int i=0; i<numAutocarro; i++) {
        if (aux == autocarros[i].linha) { // verifica se a linha já existe
            linhaOK = false;
            cout << "\n\n *** A linha " << aux << " ja existe! ***\n\n";
        }
    }

    } while (!linhaOK);
    autocarros[numAutocarro].linha = aux;


    fflush(stdin);
    cout << "\n\n Qual o TRAJETO do autocarro: ";
    getline(cin,autocarros[numAutocarro].trajeto);

    fflush(stdin);
    cout << "\n\n Qual as HORAS DO TRAJETO do autocarro: ";
    getline(cin,autocarros[numAutocarro].horas);

    fflush(stdin);
    cout << "\n\n Qual a CAPACIDADE do autocarro: ";
    cin >> autocarros[numAutocarro].capacidade;

    fflush(stdin);
    cout << "\n\n Qual o CONDUTOR do autocarro: ";
    getline(cin,autocarros[numAutocarro].condutor);

    res += autocarros[numAutocarro].capacidade;
}

void capacidadeTotal () {
    cout << "Quantidade de lugares: "<< res;
}

int main() {
    bus autocarroAfonso;
    autocarroAfonso.linha = "001";
    autocarroAfonso.trajeto = "Freamunde > Alfena > Sto Tirso";
    autocarroAfonso.horas = "7:40 > 7:55 > 8:10";
    autocarroAfonso.capacidade = 54;
    autocarroAfonso.condutor = "Cap.Meireles";

    bus autocarros [numAutocarros];
    int autocarroInicial = 0;
    string op = "";

    cout << "\n\n***Exemplo de informacao a inserir *** :" << endl;
    cout << "Linha: " << autocarroAfonso.linha << endl;
    cout << "Trajeto: " << autocarroAfonso.trajeto << endl;
    cout << "Horas: " << autocarroAfonso.horas << endl;
    cout << "Capacidade: " << autocarroAfonso.capacidade << endl;
    cout << "Condutor: " << autocarroAfonso.condutor << endl;

    do {

        cout << "\n\n***Quer adicionar autocarros na estrutura? ***";
        cout << "\nSim = 1\n";
        cout << "Nao = 0\n";
        cout << "outras opcoes";
        cout << "\nVer quantidade total de lugares = 2\n";
        cin >> op;


        if (op == "1") {
            pedirelemento(autocarros, autocarroInicial);
            autocarroInicial++;
        } else if (op == "2") {
            capacidadeTotal ();
        }
        op = " ";



    } while (autocarroInicial < numAutocarros && op!="0");





    return 0;
}
