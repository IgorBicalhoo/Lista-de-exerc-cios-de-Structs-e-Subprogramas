#include <iostream>

int calcularIdadeEmDias(int anos, int meses, int dias) {

    int diasAnos = anos * 365;
    int diasMeses = meses * 30;
    int idadeEmDias = diasAnos + diasMeses + dias;

    return idadeEmDias;
}

int main() {
    int anos, meses, dias;

    std::cout << "Insira a idade em anos: ";
    std::cin >> anos;

    std::cout << "Insira a idade em meses: ";
    std::cin >> meses;

    std::cout << "Insira a idade em dias: ";
    std::cin >> dias;

    int idadeEmDias = calcularIdadeEmDias(anos, meses, dias);

    std::cout << "A idade em dias e: " << idadeEmDias << std::endl;

    return 0;
}
