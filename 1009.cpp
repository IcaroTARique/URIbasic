#include <iostream>
#include <iomanip>

using namespace std;
int main() {

string nome;
double salario, vendas, TOTAL;

cin >> nome;
cin >> salario;
cin >> vendas;

TOTAL = salario + vendas*0.15;

cout << fixed;
cout << "TOTAL = R$ " << setprecision(2) << TOTAL << endl;

return 0;

}
