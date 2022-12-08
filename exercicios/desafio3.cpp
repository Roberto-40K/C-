#include <iostream>

using namespace std;

/*Crie um Algoritmo em C++, que tenha uma função que calcula o fatorial de um número inteiro positivo, informado pelo usuário.*/

int calcFatorial(int x)
{

    int fatorial = 1;

    for (int i = 1; i <= x; i++)
    {
        fatorial *= i;
    }

    return fatorial;
}

int main()
{

    int numero;
    while (true)
    {
        cout << "Digite um número positivo que deseja fazer o calculo fatorial: ";
        cin >> numero;

        if(numero <= 0) {
            cout << "O número informado é negativo ou neutro!\n";
        }else{
            break;
        }
    }

    cout << "O valor fatorial do número " << numero << " é: " << calcFatorial(numero) << endl;

    return 0;
}