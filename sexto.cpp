#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Digite um número inteiro não negativo: ";
    cin >> n;

    int soma = 0;
    int contador = 1;
    // while (contador <= n){
    //     soma+=contador;
    //     contador++;
    // }

   // do{
   //   soma+=contador;
   //   contador++;
   // }while (contador <= n);

   for (int j=1; j<=n; j++) {
        soma+=j;
   }

    cout << "A soma dos números de 0 até " << n << " = " << soma << endl;
    return 0;
}
