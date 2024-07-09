#include <iostream>
#include <string>

int main() {
	
	 setlocale (LC_ALL, "portuguese");
    int mes;
    std::cout << "Digite um número de 1 a 12: ";
    std::cin >> mes;

    std::string meses[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    if(mes >= 1 && mes <= 12) {
        std::cout << "O mês correspondente é: " << meses[mes - 1] << std::endl;
    } else {
        std::cout << "Número inválido. Não existe mês correspondente, digite de 1 a 12!" << std::endl;
    }

    return 0;
}

