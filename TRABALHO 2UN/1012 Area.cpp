#include <iostream>
#include <iomanip>

int main() {
	
	setlocale (LC_ALL , "portuguese");
	
double A, B, C;
    std::cout << "Digite os valores de A, B e C: ";
       std::cin >> A >> B >> C;

    double pi = 3.14159;
       double areaTriangulo = (A * C) / 2;
      double areaCirculo = pi * C * C;
    double areaTrapezio = ((A + B) / 2) * C;
       double areaQuadrado = B * B;
        double areaRetangulo = A * B;

    std::cout << std::fixed << std::setprecision(3);
    
	 std::cout << "TRIANGULO: " << areaTriangulo << std::endl;
       std::cout << "CIRCULO: " << areaCirculo << std::endl;
    std::cout << "TRAPEZIO: " << areaTrapezio << std::endl;
         std::cout << "QUADRADO: " << areaQuadrado << std::endl;
           std::cout << "RETANGULO: " << areaRetangulo << std::endl;

    return 0;
}

