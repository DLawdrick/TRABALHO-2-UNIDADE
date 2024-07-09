#include <iostream>
#include <iomanip>

int main() {
    int codigo, quantidade;
    double total;
    std::cin >> codigo >> quantidade;

    switch (codigo) {
    case 1:
    total = quantidade * 4.00;
    break;
    case 2:
    total = quantidade * 4.50;
    break;
    case 3:
    total = quantidade * 5.00;
    break;
	case 4:
    total = quantidade * 2.00;
    break;
    case 5:
    total = quantidade * 1.50;
    break;
  default:
    std::cout << "Código inválido!";
    return 1;
    }

    std::cout << "Total: R$ " << std::fixed << std::setprecision(2) << total << std::endl;
    return 0;
}

