#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

const int numAutocarros = 26;

struct bus {
    string linha;
    string trajeto;
    int capacidade;
    string horas;
    string condutor;
};

void painel() {
    bus autocarroAfonso;
    autocarroAfonso.linha = "001";
    autocarroAfonso.trajeto = "Freamunde > Alfena > Sto Tirso";
    autocarroAfonso.horas = "7:40 > 7:55 > 8:10";
    autocarroAfonso.capacidade = 54;
    autocarroAfonso.condutor = "Cap.Meireles";

    cout << "\n\n***Exemplo de informacao a inserir *** :" << endl;
    cout << "Linha: " << autocarroAfonso.linha << endl;
    cout << "Trajeto: " << autocarroAfonso.trajeto << endl;
    cout << "Horas: " << autocarroAfonso.horas << endl;
    cout << "Capacidade: " << autocarroAfonso.capacidade << endl;
    cout << "Condutor: " << autocarroAfonso.condutor << endl;

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

}

void capacidadeTotal (bus autocarros[numAutocarros], int numAutocarro) {
    int soma = 0;
    cout << " *** NUMERO TOTAL DE LUGARES *** ";
    for (int i=0; i<numAutocarro; i++) {
        soma += autocarros[i].capacidade;
    }
    cout << soma;
}

void linhasTrajetos (bus autocarros[numAutocarros], int numAutocarro) {
    cout << endl;
    cout << " *** LINHAS E TRAJETOS ***\n";
    for (int y = 0; y < numAutocarro; y++) {
        cout << (autocarros[y].linha.empty() ? " " : autocarros[y].linha); // ? = if : = else .empty() verifica se está vazio, ? deixa um espaço em branco : adiciona o elemento
        cout << " - ";
        cout << (autocarros[y].trajeto.empty() ? " " : autocarros[y].trajeto);
        cout << endl;

    }
}

void condutores (bus autocarros[numAutocarros], int numAutocarro) {
    cout << endl;
    cout << " *** CONDUTORES ***\n";
    for (int i = 0; i < numAutocarro; i++) {
        cout << (autocarros[i].condutor.empty() ? " " : autocarros[i].condutor); // ? = if : = else .empty() verifica se está vazio, ? deixa um espaço em branco : adiciona o elemento
        cout << endl;

    }
}

int main() {
    bus autocarros [numAutocarros];
    int autocarroInicial = 0;
    string op = "";

    painel ();

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
            capacidadeTotal (autocarros, autocarroInicial);
        } else if (op == "3") {
            linhasTrajetos (autocarros, autocarroInicial);
        } else if (op == "4") {
            condutores (autocarros, autocarroInicial);
        }
        op = " ";



    } while (autocarroInicial < numAutocarros && op!="0");





    return 0;
}
