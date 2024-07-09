#include <iostream>
#include <clocale>
using namespace std;

int main () {

 setlocale (LC_ALL, "portuguese");
 int mes;
 cout<< "digite um número de 1 a 12: ";
 cin>> mes;
 
 string meses[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
 
