#include <iostream>
using namespace std;

int main() {
    float A=0,B=0,C=0;
    cout << "Ingrese el voltage (A): ";
    cin >> A;w
   
    cout << "Ingrese la resistencia (B): ";
    cin >> B;

    if (A<0 && B<0) {
        cout << "Error: El voltage y la resistencia no pueden ser negativos." << endl;

    } else if (B == 0) {
        cout << "Error: La resistencia no puede ser cero." << endl;
        
    } else {
         C = A / B;
    cout << "La corriente (C) es: " << C << endl;

    }
    return 0;
}