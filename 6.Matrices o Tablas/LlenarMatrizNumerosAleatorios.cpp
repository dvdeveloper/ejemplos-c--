#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	
	int numeros[100][100], dato, nfilas, ncol;
	
	cout << "Digite  el numero de filas: ";
	cin >> nfilas;
	
	cout << "Digite el numero de columnas: ";
	cin >> ncol;
	
	srand(time(NULL)); //genera numeros aleatorios
	
	for(int i=0; i < nfilas; i++){
		for(int j=0; j < ncol; j++){
			dato = 1+rand()%(100); //generar numeros aleatorios entre 1-100
			numeros[i][j] = dato;
		}
	}
	
	//imprimir matriz
	for(int i=0; i < nfilas; i++){
		for(int j=0; j < ncol; j++){
			cout << numeros[i][j] << " ";
		}
		cout << "\n";
	}
	
	getch();
	return 0;
}
