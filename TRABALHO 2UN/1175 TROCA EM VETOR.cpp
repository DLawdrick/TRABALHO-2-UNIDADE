#include <iostream>

using namespace std;

int main() {
const int SIZE = 20;
int N[SIZE];

// Ler os valores para o vetor N
for (int i = 0; i < SIZE; ++i) {
cin >> N[i];
}

 // Trocar os elementos conforme pedido
for (int i = 0; i < SIZE / 2; ++i) {
int temp = N[i];
N[i] = N[SIZE - 1 - i];
N[SIZE - 1 - i] = temp;
}

// Imprimir o vetor mudado
for (int i = 0; i < SIZE; ++i) {
cout << "N[" << i << "] = " << N[i] << endl;
 }

    return 0;
}

