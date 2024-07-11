#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
double A, B, C;
cin >> A >> B >> C;

    double pi = 3.14159;
       double aTriangulo = (A * C) / 2;
      double aCirculo = pi * C * C;
    double aTrapezio = ((A + B) / 2) * C;
       double aQuadrado = B * B;
        double aRetangulo = A * B;

cout << fixed << setprecision(3);
    
cout << "TRIANGULO: " << aTriangulo << endl;
cout << "CIRCULO: " << aCirculo << endl;
cout << "TRAPEZIO: " << aTrapezio << endl;
cout << "QUADRADO: " << aQuadrado << endl;
cout << "RETANGULO: " << aRetangulo << endl;

    return 0;
}
