#include <iostream>
#include <math.h>

using namespace std;

//Dada a função f(x) = x² - 3x + 5.
//Crie um Algoritmo em C++, que tenha uma função que calcule o valor de f(a), em que a é um número real informado pelo usuário.

float funcao(float x) {

     float func = pow(x,2) - 3*x + 5;
     return func;
}

int main (){

    float a;

    cout << "Informe um número real para o programa realizar o calculo da função: ";
    cin >> a;

    cout << "O valor da função do número " << a << " é igual a " << funcao(a) << endl;

    return 0;
}
