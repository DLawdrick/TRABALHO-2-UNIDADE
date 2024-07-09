#include <iostream>
#include <clocale>

using namespace std;
 
int main() {
 setlocale (LC_ALL, "Postuguese");
 
 int A, B, soma;
 cout<< "informe o primeiro valor: ";
 cin>> A;
 cout<< "informe o segundo valor: ";
 cin>> B;
 soma= A + B;
 
 cout<<"SOMA = "<< soma;
 

    return 0;
}
