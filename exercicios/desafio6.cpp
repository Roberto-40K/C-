#include <iostream>

using namespace std;

// Crie um algoritmo em C++, em que o usuário informa os gastos com alimentação de 5 famílias, calcule a média de gastos de cada família, 
//e diz se seu gasto é abaixo da média, acima da média ou na média.

int main() {
  
  double gastoFamilia[5], gastos = 0, qtdeFamilias = 5, media;

  for (int i = 0; i < 5; ++i) {
    cout << "Digite os gastos da família " << i + 1 << ": R$";
    cin >> gastoFamilia[i];

    gastos += gastoFamilia[i];
  }

  cout << endl;

  media = gastos / qtdeFamilias;
  cout << "A média de gastos é: R$" << media << endl;

  cout << endl;

  for (int i = 0; i < 5; ++i) {
    if (gastoFamilia[i] < media) {
      cout << "A família " << i + 1 << " tem gastos abaixo da média\n";
    }
    else if (gastoFamilia[i] == media) {
      cout << "A família " << i + 1 << " tem gastos na média\n";
    }
    else {
      cout << "A família " << i + 1 << " tem gastos acima da média\n";
    }
  }

  cout << endl;
  return 0;
}
