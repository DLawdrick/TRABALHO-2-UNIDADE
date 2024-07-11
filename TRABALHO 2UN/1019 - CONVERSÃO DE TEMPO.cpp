#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Calculando horas, minutos e segundos
    int horas = N / 3600;
    int minutos = (N % 3600) / 60;
    int segundos = N % 60;

    // Imprimindo o resultado no formato horas:minutos:segundos
    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}
