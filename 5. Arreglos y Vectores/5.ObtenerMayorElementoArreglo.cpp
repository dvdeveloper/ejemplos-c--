#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numeros[100];
	int n;
	int mayor = 0;
	
	cout << "Digite el numero de elementos del arreglo: ";
	cin >> n;
	
	for(int i=0;i<n;i++){
		cout << i + 1 << " Digite un número: ";
		cin >> numeros[i];
		
		if(numeros[i] > mayor){
			mayor = numeros[i];
		}
	}
	
	cout << "\nEl mayor elemento del vector es: " << mayor;
	
	getch();
	return 0;
}
