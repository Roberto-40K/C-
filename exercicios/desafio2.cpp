#include <iostream>

using namespace std;

/*Crie um Algoritmo em C++, em que o usuário informa as notas de três provas de um determinado aluno e também a média de nota da turma toda, 
O Algoritmo deve calcular a média deste aluno e informar se sua nota é acima da média, abaixo da média ou está na média.*/

int main(){

    int n = 1, qtdeProvas;
    float nota, totalNota, mediaAluno, mediaTurma = 6.0;

    cout << "Digite a média da turma: ";
    cin >> mediaTurma;

    cout << "Média da Turma: " << mediaTurma << endl;

    cout << "\n";

    for (int i = 1; i <= 3; i++){

        cout << "Digite a nota da prova " << i << "; ";
        cin >> nota;

        totalNota += nota;
        qtdeProvas = n;

        n++;
    }

    mediaAluno = totalNota / (float)qtdeProvas;

    cout << "\n";

    cout << "Média do Aluno: " << mediaAluno << endl;

    if (mediaAluno < mediaTurma){
        cout << "O aluno está abaixo da média!";

    }
    else if (mediaAluno == mediaTurma){
        cout << "O aluno está na média!";

    }
    else{
        cout << "O aluno está acima da Média!";

    }

    return 0;
}
