#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Turmas {

    public:
        string nome;

    private:
        float notaMedia;
        string listaAlunos [26][2]; // 0-Numeros 1-Nome
        string listaModulos [50];

    public:
        void numAlunos () {
            for (int n = 0; n < 26; n++){
                cout << "Qual o numero do aluno " << n+1 << "?" << endl;
                cin >> listaAlunos [n][0];
            }

        }
        void nomeAlunos () {
            for (int j = 0; j < 26; j++){
                cout << "Qual o nome do aluno " << j+1 << "?" << endl;
                cin >> listaAlunos [j][1];
            }

        }
        bool inserirAluno(string numeroAluno, string nomeAluno) {
            for (int x = 0; x < 26; x++){
                if (this->listaAlunos[x][0]=="") {
                    this->listaAlunos[x][0] = numeroAluno;
                    this->listaAlunos[x][1] = nomeAluno;
                    return true;
                }

            }
            return false;
        }

        bool retirarAluno(string numeroAluno) {
            for (int n = 0; n < 26; n++){
                if (this->listaAlunos[n][0]!="") {
                    this->listaAlunos[n][0] = "";
                    this->listaAlunos[n][1] = "";
                    return true;
                }

            }
            return false;
        }

        void colocaNotaMedia(float notaX){
            this ->notaMedia = notaX;
        }

        string listagemNumAlunos(){
            string aux = "";
            for (int i = 0; i < 26; i++){
                if (this -> listaAlunos[i][0] != "") {
                    aux += this ->listaAlunos[i][0];
                    aux += "\n";
                }
            }
            return aux;
        }

        string listagemNomeAlunos(){
            string aux = "";
            for (int i = 0; i < 26; i++){
                if (this -> listaAlunos[i][1] != "") {
                    aux += this ->listaAlunos[i][1];
                    aux += "\n";
                }
            }
            return aux;
        }

        void imprimeNumeroAlunos(){
            cout << listagemNumAlunos();
        }
        void imprimeQuantAlunos(){
            cout <<this-> numeroAlunos();
        }


    private:
        int numeroAlunos(){
            int contador = 0;
            for (int x = 0; x < 26; x++){
                if (this ->listaAlunos[x][0] != ""){
                    contador++;
                }
            }
            return contador;
        }
};


int main (){

    Turmas turma1P;

    turma1P.nome = "Turma 1P 2023/24";
    turma1P.inserirAluno("14581", "Lucas Soares");
    turma1P.inserirAluno("14582", "Lucas Soares");
    turma1P.inserirAluno("14583", "Lucas Soares");
    turma1P.inserirAluno("14584", "Lucas Soares");
    turma1P.inserirAluno("14585", "Lucas Soares");
    turma1P.inserirAluno("14586", "Lucas Soares");
    turma1P.inserirAluno("14587", "Lucas Soares");
    turma1P.inserirAluno("14588", "Lucas Soares");
    turma1P.inserirAluno("14589", "Lucas Soares");
    turma1P.inserirAluno("14590", "Lucas Soares");
    turma1P.inserirAluno("14591", "Lucas Soares");
    turma1P.inserirAluno("14592", "Lucas Soares");
    turma1P.inserirAluno("14593", "Lucas Soares");

    int decisao;
    string varAuxNome, varAuxNumero;
    string numRetirar;

    do {

        cout << "\n\nO que quer ver?";
        cout << "\nNumero de Alunos = 1\n";
        cout << "Numero dos alunos = 2\n";
        cout << "Nome dos alunos = 3\n";
        cout << "Inserir aluno = 4\n";
        cout << "Remover aluno = 5\n";
        cout << "\nSAIR = 0\n";
        cin >> decisao;


        if (decisao == 1) {
            turma1P.imprimeQuantAlunos();
        } else if (decisao == 2) {
            turma1P.imprimeNumeroAlunos();
        } else if (decisao == 3) {
            cout << turma1P.listagemNomeAlunos();
        } else if (decisao == 4) {
            cout << "Qual o numero do aluno? ";
            cin >> varAuxNumero;
            fflush(stdin);
            cout << "Qual o numero do aluno? ";
            getline(cin, varAuxNome);
            turma1P.inserirAluno(varAuxNumero, varAuxNome);
        } else if (decisao == 5) {
            cout << "Insira o numero do aluno que quer retirar";
            cin >> numRetirar;
            turma1P.retirarAluno(numRetirar);

        }else if (decisao == 0) {
            return 0;
        }

    } while (decisao!=0);

    return 0;
}
