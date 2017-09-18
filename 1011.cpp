#include <iostream>
#include <iomanip>
#define PI 3.14159

using namespace std;

int main() {

double raio, VOLUME;

cin >> raio;

VOLUME = (4.0/3)*PI*raio*raio*raio;


cout << "VOLUME = " << fixed << setprecision(3) << VOLUME << endl;

return 0;
}
