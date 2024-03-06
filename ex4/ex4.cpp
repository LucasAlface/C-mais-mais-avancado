#include <iostream>
#include <string>

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
                if (this->listaAlunos[x][0]!="") {
                    this->listaAlunos[x][0] = numeroAluno;
                    this->listaAlunos[x][1] = nomeAluno;
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
                aux += this ->listaAlunos[i][0];
                aux += "\n";
            }
            return aux;
        }

        void imprimeNumeroAlunos(){
            cout << listagemNumAlunos();
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

    return 0;
}
