#include <iostream>

double calcularPesoIdeal(double alt, char sexo) {
    if (sexo == 'M' || sexo == 'm') {
        return 72.7 * alt - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        return 62.1 * alt - 44.7;
    } else {
        std::cout << "Sexo invalido. Por favor, insira 'M' para masculino ou 'F' para feminino." << std::endl;
        return -1;
    }
}

int main() {
    double altura;
    char sexo;

    std::cout << "Insira a altura (em metros): ";
    std::cin >> altura;

    std::cout << "Insira o sexo (M para masculino ou F para feminino): ";
    std::cin >> sexo;

    double pesoIdeal = calcularPesoIdeal(altura, sexo);

    if (pesoIdeal != -1) {
        std::cout << "O peso ideal e: " << pesoIdeal << " kg" << std::endl;
    }

    return 0;
}
