#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int nro, puntosPC=0, puntosUS=0;
	int eleccion, opcion;
	string rdo;
	cout <<"Quiere jugar?(1 - SI, 0 - NO): ";
	cin >> opcion;
	while (opcion==1){
		nro=1 + rand()%(3+1-1);
		cout << "Ingrese su elección: (1 - piedra, 2 - papel, 3 - tijera): ";
		
		cin >> eleccion;
		
		switch (eleccion){
		case 1: switch (nro){
					case 1: rdo="empate";
					break;
					case 2: rdo="perdiste";
					puntosPC++;
					break;
					case 3: rdo= "ganaste";
					puntosUS++;
					break;
				}
		break;
		case 2: switch (nro){
					case 1: rdo="ganaste";
					puntosUS++;
					break;
					case 2: rdo="empate";
					break;
					case 3: rdo= "perdiste";
					puntosPC++;
					break;
				}
		break;
		case 3: switch (nro){
					case 1: rdo="perdiste";
					puntosPC++;
					break;
					case 2: rdo="ganaste";
					puntosUS++;
					break;
					case 3: rdo= "empate";
					break;
				}
		break;
		};
		cout <<"Tu elección fue: " << eleccion << endl;
		cout <<"La PC elijió: " << nro << endl;
		cout <<"Resultado: " << rdo << endl;
		cout << endl << "Quiere jugar?(1 - SI, 0 - NO): ";
		cin >> opcion;
	}
	cout << endl << "     Puntaje PC: " << puntosPC << endl;
	cout << endl << "Puntaje Usuario: " << puntosUS << endl;
	if (puntosPC > puntosUS)  cout << endl << "PERDISTE!!!!" << endl;
	if (puntosPC == puntosUS) cout << endl << "EMPATARON!!!" << endl;
	if (puntosPC < puntosUS)  cout << endl << "GANASTE!!!!!" << endl;
	
	return 0;
}

