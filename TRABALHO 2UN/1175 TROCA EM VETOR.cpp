#include <iostream>

int main() {
const int SIZE = 20;
int N[SIZE];

// Ler os valores para o vetor N
for (int i = 0; i < SIZE; ++i) {
std::cin >> N[i];
}

 // Trocar os elementos conforme pedido
for (int i = 0; i < SIZE / 2; ++i) {
int temp = N[i];
N[i] = N[SIZE - 1 - i];
N[SIZE - 1 - i] = temp;
}

// Imprimir o vetor mudado
for (int i = 0; i < SIZE; ++i) {
std::cout << "N[" << i << "] = " << N[i] << std::endl;
 }

    return 0;
}

