#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numeros[100], n;
	int multiplicacion = 1;
	
	cout << "Digite el numero de elementos del arreglo ";
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << "Digite un numero: ";
		cin >> numeros[i];
	}
	
	
	for(int i=0;i<n;i++){
		cout << i << " -> " << numeros[i] << endl;
	}
	
	
	
	getch();
	return 0;
}
