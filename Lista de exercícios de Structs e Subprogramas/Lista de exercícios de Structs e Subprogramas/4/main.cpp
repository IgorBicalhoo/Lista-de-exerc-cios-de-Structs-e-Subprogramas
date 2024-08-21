#include <iostream>

using namespace std;

//Construir um programa que calcule e apresente o resultado da conversão de 0 a 100  graus Fahrenheit para graus Celsius. O cálculo dessa conversão deve ficar isolado em  uma função estar de acordo com a seguinte fórmula: C=5/9.(F-32)




float celsius(float graus);

int main()
{
    float graus;

    cout << "----------------------CONVERSOR DE F PRA C---------------------------" << endl;

    cout << "Digite a temperatura em Fahrenheit: " ;
    cin >> graus;

    if(graus > 100){
        cout << "Erro, Cite uma temperatura menor que 100";
        return 1;
    }

   float conv = celsius(graus);
    cout << graus << " graus em graus celsius eh: " << conv ;





    return 0;
}

float celsius(float graus){
 return 5.0f/9.0f * (graus - 32.0f);
}









