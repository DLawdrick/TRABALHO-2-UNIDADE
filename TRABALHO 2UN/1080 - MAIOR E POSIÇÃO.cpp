#include <iostream>
#include <climits> 

using namespace std;

int main() {
    const int N = 100; 
    int valores[N];
    int maior = INT_MIN; 
    int posicao = -1;

    
    for (int i = 0; i < N; i++) {
    cin >> valores[i];
    if (valores[i] > maior) {
    maior = valores[i];
    posicao = i + 1; 
        }
    }

    
    cout << maior << endl;
    cout << posicao << endl;

return 0;
}
