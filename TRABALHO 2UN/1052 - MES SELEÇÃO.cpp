#include <iostream>
#include <string>

using namespace std;

int main() {
   
    string months[] = {"January", "February", "March", "April", "May", "June", 
    "July", "August", "September", "October", "November", "December"};
    
    int number;
    cin >> number;  

    
    if (number < 1 || number > 12) {
   cout << "Número inválido! Deve ser entre 1 e 12." << endl;
    return 0;  
    }

    string monthName = months[number - 1];  

    cout << monthName << endl;

return 0;
}
