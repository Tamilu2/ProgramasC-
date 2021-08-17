/*Ternas pitagóricas en el intervalo [x, y]
Una terna pitagórica está compuesta por
3 valores {a,b,c} que cumplen la siguiente
condición:
	a^2 + b^2 = c^2

*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int x, y, aux, i=0, ternas[100][3]; // ternas es un vector donde voy guardando los 3 valores que cumplen la terna
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	if (x>y){
		aux = x;
		x = y;
		y = aux;
	}
	for (int c = x + 2; c <= y; c ++){
		for (int b = x + 1; b < c; b++){
			for (int a = x; a < b; a++){
				if (a*a + b*b == c*c){
					ternas[i][0] = a;
					ternas[i][1] = b;
					ternas[i][2] = c;
					i++;
					
				}
			}
		}
	}
	for (int j=0;j<i;j++){
		cout <<setw(4) << ternas[j][0] << "^2 + " <<setw(4) << ternas[j][1] << "^2 = " <<setw(4) << ternas[j][2] << "^2 " << endl;
	}
	return 0;
}

