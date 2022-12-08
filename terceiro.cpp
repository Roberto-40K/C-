#include <iostream>
#include <math.h>

using namespace std;

int main()
{
 int a = 5, b = 2;

 int resultado = a + b;
 cout << "O resultado da soma de " << a << " + " << b << " é " << resultado << endl;
 // cout << "SOMA: " << a+b << endl;

 int sub = a - b;
 cout << "SUBTRAÇÃO: " << sub << endl;

 int mult=a*b;
 cout << "MULTIPLICAÇÃO: " << mult << endl;

 int quocdiv= a/b;
 cout << "QUOCIENTE DA DIVISÃO: " << quocdiv << endl;

 int restodiv= a%b;
 cout << "RESTO DA DIVISÃO: " << restodiv << endl;

 float div = (float)a/(float)b;
 cout << "DIVISÃO: " << div << endl;

 float pot = pow(a,b);
 cout << "POTÊNCIA: " << pot << endl;

 //Incremento e Decremento
 cout << "a antigo: " << a << endl;
 //Incremento:
 //a = a+1;
 //a+=1;
 //a++
 //a+=3;

 //Decremento:
 //a = a-1;
 //a-=1;
 //a--;
 //a-=4;

 a*=3;
 cout << "a novo: " << a << endl;

     return 0;
}