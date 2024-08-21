#include <iostream>
using namespace std;

int calcular_anos_necessarios(int populacao_a, float taxa_crescimento_a, int populacao_b, float taxa_crescimento_b);

int main() {
    int populacao_a = 90000000;
    float taxa_crescimento_a = 3.0;
    int populacao_b = 200000000;
    float taxa_crescimento_b = 1.5;

    int anos_necessarios = calcular_anos_necessarios(populacao_a, taxa_crescimento_a, populacao_b, taxa_crescimento_b);

    cout << "Numero de anos necessarios para que a populacao do pais 'a' ultrapasse ou seja igual a populacao do pais 'b': " << anos_necessarios << endl;

    return 0;
}

int calcular_anos_necessarios(int populacao_a, float taxa_crescimento_a, int populacao_b, float taxa_crescimento_b) {
   int anos = 0;
    for (; populacao_a < populacao_b; anos++) {
        populacao_a = populacao_a * (1 + taxa_crescimento_a / 100);
    }
    return anos;
}

