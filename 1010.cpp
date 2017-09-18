#include <iostream>
#include <iomanip>

using namespace std;

int main(){

int peca_1, peca_2, qtd_peca_1, qtd_peca_2;
double valor_peca_1, valor_peca_2, VALOR;

cin >> peca_1 >> qtd_peca_1 >> valor_peca_1;
cin >> peca_2 >> qtd_peca_2 >> valor_peca_2;

VALOR = (qtd_peca_1*valor_peca_1)+(qtd_peca_2*valor_peca_2);

cout << fixed;
cout << "VALOR A PAGAR: R$ " << setprecision(2) << VALOR << endl;

return 0;
}
