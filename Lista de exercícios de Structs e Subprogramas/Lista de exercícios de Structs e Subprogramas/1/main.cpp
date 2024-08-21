#include <iostream>
#include <string>

using namespace std;

struct aluno{
    int matricula;
    char nome[100];

};


int main(){
int max_alunos = 50;
aluno alunos[max_alunos];
int numAlunos;

cout << "quantos alunos quer cadastrar?: ";
cin >> numAlunos;

if(numAlunos > max_alunos){
    cout << "erro: voce passou do limite estabelecido de alunos" << endl;
    return 1;
}


for(int i = 0; i < numAlunos; i++){
    cout << "Digite a matricula do aluno " << i + 1 << ": "  ;
    cin >> alunos[i].matricula;
    cin.ignore();


    cout << "Digite o nome do aluno " << i + 1 << ": ";
    cin.getline(alunos[i].nome,100);

}

cout << "Alunos cadastrados:" << numAlunos << endl;
for(int i = 0; i < numAlunos; i++){
    cout << "Matricula: " << alunos[i].matricula << endl;
    cout << "Nome: " << alunos[i].nome << endl;


}


return 0;


}




