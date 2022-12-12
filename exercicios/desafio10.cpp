#include <iostream>

using namespace std;

/*
Crie um Algoritm em C++, que tenha uma função que recebe dois ponteiros e troca o valor de referência entre os dois.
*/

int* pont1;
int* pont2;

void troca(int x, int y) {

    *pont1 = y;
    *pont2 = x;

}

int main() {

    int valor1, valor2;

    cout << "Digite o 1º valor: ";
    cin >> valor1;

    cout << "Digite o 2ª valor: ";
    cin >> valor2;

    pont1 = &valor1;
    pont2 = &valor2;

    cout << endl;

    cout << "Endereço de memória do Ponteiro 1: " << pont1 << " valor armazenado no endereço: " << *pont1 << endl;
    cout << "Endereço de memória do Ponteiro 2: " << pont2 << " valor armazenado no endereço: " << *pont2 << endl;

    cout << endl;

    troca(*pont1, *pont2);

    cout << "### Após a Inversão ###\n";

    cout << endl;

    cout << "Endereço de memória do Ponteiro 1: " << pont1 << " valor armazenado no endereço: " << *pont1 << endl;
    cout << "Endereço de memória do Ponteiro 2: " << pont2 << " valor armazenado no endereço: " << *pont2 << endl;

    return 0;
}