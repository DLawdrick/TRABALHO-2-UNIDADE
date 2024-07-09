#include <iostream>
#include <string>

int main() {
	
	 setlocale (LC_ALL, "portuguese");
    int mes;
    std::cout << "Digite um n�mero de 1 a 12: ";
    std::cin >> mes;

    std::string meses[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    if(mes >= 1 && mes <= 12) {
        std::cout << "O m�s correspondente �: " << meses[mes - 1] << std::endl;
    } else {
        std::cout << "N�mero inv�lido. N�o existe m�s correspondente, digite de 1 a 12!" << std::endl;
    }

    return 0;
}

