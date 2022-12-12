#include <iostream>

using namespace std;

/*
Crie um Algoritmo em C++, que o usuário informa o tamanho de um vetor, e seus elementos. O Algoritmo deve imprimir este vetor e logo após, perguntar ao usuário
se ele quer imprimir outro vetor. Utilize o delete após a impressão do vetor.
*/

int main() {
    string choice;

    do {
        int size;

        cout << "Informe o tamanho do vetor: ";
        cin >> size;

        double* vetor = new double[size];

        for (int i = 0; i < size; ++i) {
            cout << "Informe o elemento da linha: " << i + 1 << ": ";
            cin >> vetor[i];
        }

        cout << "O vetor inserido é:\n[";
        for (int i = 0; i < size; ++i) {
            cout << vetor[i];

            if (i == size - 1)
                continue;

            cout << " ";
        }
        cout << "]\n";

        delete[] vetor;

        cout << "Deseja imprimir outro vetor: ";
        cin >> choice;

    } while (choice == "sim" || choice == "SIM" || choice == "Sim");

    return 0;
}
