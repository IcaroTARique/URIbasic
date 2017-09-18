#include <iostream>
#include <stdlib.h>

using namespace std;
int main () {

int a,b,c,s,S;

cin >> a;
cin >> b;
cin >> c;

s = (a+b+abs(a-b))/2;
S = (s+c+abs(s-c))/2;

cout << S << " eh o maior" << endl;
return 0;
}
