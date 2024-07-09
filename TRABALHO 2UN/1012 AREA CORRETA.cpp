#include <iostream>
#include <iomanip>

int main() {
	
double A, B, C;
std::cin >> A >> B >> C;

    double pi = 3.14159;
       double aTriangulo = (A * C) / 2;
      double aCirculo = pi * C * C;
    double aTrapezio = ((A + B) / 2) * C;
       double aQuadrado = B * B;
        double aRetangulo = A * B;

    std::cout << std::fixed << std::setprecision(3);
    
	 std::cout << "TRIANGULO: " << aTriangulo << std::endl;
       std::cout << "CIRCULO: " << aCirculo << std::endl;
    std::cout << "TRAPEZIO: " << aTrapezio << std::endl;
         std::cout << "QUADRADO: " << aQuadrado << std::endl;
           std::cout << "RETANGULO: " << aRetangulo << std::endl;

    return 0;
}
