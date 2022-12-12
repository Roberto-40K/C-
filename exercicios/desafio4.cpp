#include <iostream>

using namespace std;

/*Crie um Algoritmo em C++, que calcula a potência B^E, em que o usuário informa um número real B e um número natural E. Nesse algoritmo,
sempre que é informado o resultado da potência, é perguntado ao usuário, se este deseja calcular outra potência.*/

int main(){

   string opcao;

   while (true) {

     float numeroReal;
     int numeroNatural;

     cout << "Informe um número real: ";
     cin >> numeroReal;

     cout << "Informe um número natural: ";
     cin >> numeroNatural;

    float potencia;
    float aux = numeroReal;

    int i = 1;
    
    do{
      
      if(numeroNatural > 1){

         potencia = aux*numeroReal;
         aux = potencia;
      }else{
         potencia = numeroReal;
      }

      i++;

    }while (i < numeroNatural);
    

     cout << "O resultado da potência de " << numeroReal << " elevado a " << numeroNatural << " é: " << potencia << endl;

     cout << "Deseja condinuar?\n";

     cout << "0-Não\n";
     cout << "1-Sim\n";

     cin >> opcao;

     if (opcao == "0")
     break;

   }
   
   return 0;
}
