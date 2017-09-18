#include <iostream>
#include <iomanip>
#define PI 3.14159

using namespace std;

int main() {

double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

cin >> A >> B >> C;

TRIANGULO = (A*C)/2;
CIRCULO = PI*C*C;
TRAPEZIO = (C*(A+B))/2;
QUADRADO = B*B;
RETANGULO = A*B;

cout << fixed;
cout << "TRIANGULO: " << setprecision(3) << TRIANGULO << endl;
cout << "CIRCULO: " << setprecision(3) << CIRCULO << endl;
cout << "TRAPEZIO: " << setprecision(3) << TRAPEZIO << endl;
cout << "QUADRADO: " << setprecision(3) << QUADRADO << endl;
cout << "RETANGULO: " << setprecision(3) << RETANGULO << endl;

return 0;
}
