#include <iostream>

using namespace std;

int t;

#define pi 3.14;
#define curtir cout << "Curta essa linguagem, pois será com ela que\n você vai desenvolver jogos na Unreal Engine!\n";

void inscrever(){
    cout << "Se concentre na sintaxe do C++\nE assim você aprenderá C++\n";
}

int somar(int &x, int &y){
    //int t;
    t = 1;
    x = 30, y = 40;
    int soma=x+y;
    return soma;
}

int main(){
    
    //int t;
    t = 0;

    inscrever();
   
    int a = 5, b = 4;
    int s= somar(a,b);
    cout << "O valor de a: " << a << endl;
    cout << "O valor de b: " << b << endl;
    cout << "SOMA: " << s << endl;
    cout << "VALOR DE t: " << t << endl;

    //cout << pi;
    curtir;

    return 0;
}
