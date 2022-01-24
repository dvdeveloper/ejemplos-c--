#include <iostream>
#include <conio.h>

using namespace std;

/* Una matris es simetrica si es cuadrada y si es igual a su matriz transpuesta

| 8 1 3 |     |8 1 3|
|1 7 4 | ---> |1 7 4|
|3 4 8 |      |3 4 9|

*/

int main(){
	
	int numeros[100][100], filas, columnas;
	char bandera='F';
	
	cout << "Digite el numeor de filas: \n"; cin >> filas;
	cout << "Digite el numeor de columnas: \n"; cin >> columnas;
	
	
	for(int i=0; i < filas; i++){
		for(int j= 0; j < columnas; j++){
			cout << "Digite un numero [" << i << "][" << j << "]: ";
			cin >> numeros[i][j];
		}
	}
	
	if(filas == columnas){
		for(int i=0; i < filas; i++){
			for(int j= 0; j < columnas; j++){
				if(numeros[i][j] == numeros[j][i] ){
					bandera = 'V';
				}
			}
		}
	}
	
	if(bandera == 'V'){
		cout << "La matriz es simetrica";
	}else{
		cout << "La matriz no es simetrica";
	}
	
	getch();
	return 0;
}
