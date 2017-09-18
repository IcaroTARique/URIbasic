#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int num, hora;
double valph,SALARY;


cin >> num;
cin >> hora;
cin >> valph;

SALARY = hora*valph;

cout << "NUMBER = " << num << endl;
cout << fixed;
cout << "SALARY = U$ " << setprecision(2) << SALARY << endl;

return 0;
}
