#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int codigo1, codigo2, quantidade1, quantidade2;
    double preco1, preco2, valorTotal;

    // Leitura dos dados da pe�a 1
    cin >> codigo1 >> quantidade1 >> preco1;
    // Leitura dos dados da pe�a 2
    cin >> codigo2 >> quantidade2 >> preco2;

    // C�lculo do valor total
    valorTotal = (quantidade1 * preco1) + (quantidade2 * preco2);

    // Exibi��o do valor a pagar
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << valorTotal << endl;

    return 0;
}
