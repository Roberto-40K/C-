#include <iostream>

using namespace std;

/*Em um programa de Moradia Popular, somente pessoas maiores de 21 anos e com renda abaixo de R$1200,00 podem participar.
Crie um Algoritmo em C++, em que o usuário informa sua idade e sua renda, e é informado se ele pode ou não participar desse programam*/

int main(){

    int idade;
    double renda;

    cout << "Programa Social de Moradia Popular\n";
    cout << "\n";

    cout << "Digite a sua idade: ";
    cin >> idade;

    cout << "\n";

    cout << "Informe a sua renda: R$";
    cin >> renda;

    (idade > 21 && renda < 1200) ? cout << "Você está apto para participar do programa!" : cout << "Você não está apto para participar do programa!";

   return 0;
}