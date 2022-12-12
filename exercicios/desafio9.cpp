#include <iostream>

using namespace std;

/*
Crie um Algoritmo em C++ utilizando apenas ponteiros, em que o usuário informa a idade de duas pessoas, e o Algoritmo informa a média destas duas idades.
*/

int main() {

    cout << "Informe a idade de duas pessoas\n";

    int* idade1 = new int;
    int* idade2 = new int;

    cout << "Informe a idade da 1ª pessoa: ";
    cin >> *idade1;

    cout << "Informe a idade da 2ª pessoa: ";
    cin >> *idade2;

    double* media = new double; 
    *media = (*idade1 + *idade2) / 2;

    cout << "Média das duas idades: " << *media << endl;

    return 0;
}