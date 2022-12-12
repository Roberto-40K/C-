#include <iostream>

using namespace std;

/*
Crie um Algoritmo em C++, em que o usuário informa a dimensão de uma matriz, e os elementos (ambas com a mesma dimensão) 
e o Algoritmo mostra a soma entres estas duas matrizes.
*/

int main() {

    int linha, coluna;

    cout << "Informe o dimensão da matriz\n";

    cout << "Quantidade de linhas: ";
    cin >> linha;

    cout << "Quantidade de colunas: ";
    cin >> coluna;

    int l, c;
    double matriz[linha][coluna], matrizSoma;
    double* pont;
    
    
    for (int i = 0; i < 2; ++i) {

        cout << "Informe os elementos da matriz: " << i + 1 << endl;

        for (l = 0; l < linha; ++l) {
            for (c = 0; c < coluna; ++c) {

                cout << "Digite o elemento da linha " << l + 1 << " coluna " << c + 1 << ": ";
                cin >> matriz[l][c];

                pont = &matriz[l][c];
                matrizSoma += *pont;
            }
            cout << endl;
        }
    }

    cout << "Soma entre as duas matrizes é: " << matrizSoma << endl;
    
    return 0;
}
