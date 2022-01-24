#include <iostream>

using namespace std;

int main(){
	
	int saldo_inicial = 1000, opc;
	float extra, retiro;
	
	cout << "\nBienvenido a su Cajero Virtual " << endl;
	cout << "\n1. Ingresar dinero en cuenta " << endl;
	cout << "\n2. Retirar dinero de la cuenta" << endl;
	cout << "\n3. Salir" << endl;
	cout << "Opcion: ";
	
	cin >> opc;
	
	switch(opc){
		case 1:
			
			cout << "Digite la cantidad de dinero a ingresar: ";
			cin >> extra;
			
			saldo_inicial = saldo_inicial + extra;
			cout << "Dinero en cuenta: " << saldo_inicial;
			
			break;
		case 2:
			
			cout << "Digite la cantidad de dinero a retirar: ";
			cin >> retiro;
			
			if(retiro > saldo_inicial){
				cout << "No tienes esa cantidad de dinero";
			}else{
				saldo_inicial = saldo_inicial - retiro;
				cout << "Dinero en cuanta: " << saldo_inicial;
			}
			
			break;
		case 3:
			break;
		default:
			cout <<"Opción ingresada no existe";
			break;
	}
	
	return 0;
}
