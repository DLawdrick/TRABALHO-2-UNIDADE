#include <iostream>
#include <iomanip>

int main() {
    int codigo1, codigo2, quantidade1, quantidade2;
    double preco1, preco2, valorTotal;

    // Leitura dos dados da pe�a 1
    std::cin >> codigo1 >> quantidade1 >> preco1;
    // Leitura dos dados da pe�a 2
    std::cin >> codigo2 >> quantidade2 >> preco2;

    // C�lculo do valor total
    valorTotal = (quantidade1 * preco1) + (quantidade2 * preco2);

    // Exibi��o do valor a pagar
    std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << valorTotal << std::endl;

    return 0;
}
