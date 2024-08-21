#include <iostream>

using namespace std;

int maiorvalor(int a, int b, int c);

int main(){
    int valores[3];

    for (int i = 0; i < 3; i++) {
        cout << "Digite o valor " << (i + 1) << ": ";
        cin >> valores[i];
    }

    int maior = maiorvalor(valores[0], valores[1], valores[2]);
    cout << "O maior valor e: " << maior << endl;

    return 0;
}

int maiorvalor(int a, int b, int c){
    if (a > b && a > c){
        return a;
    } else if(b > a && b > c){
        return b;
    } else{
        return c;
    }
}
