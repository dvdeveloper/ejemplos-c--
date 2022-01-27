#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	int numeros[] = {1,2,3,4,5}; //la condición es que el arreglo este ordenado previamente
	int inf,sup,mitad,dato;
	char flag = 'F';
	
	dato 	= 4; //número a buscar
	inf 	= 0; //inicio arreglo, por defecto: 0
	sup		= 5; //limite del arreglo
	
	while(inf <= sup){
		
		mitad = (inf+sup) / 2;
		cout << "Posicion Mitad: " << mitad << endl;
		
		if(numeros[mitad] == dato){
			flag = 'V';
			break;
		}
		if(numeros[mitad] > dato){
			sup = mitad;
			mitad = (inf+sup) / 2;
		}
		if(numeros[mitad] < dato){
			inf = mitad;
			mitad = (inf+sup) / 2;
		}
		
	}
	
	if(flag == 'F'){
		cout << "El numero a buscar no existe en el arreglo" << endl;
	}else{
		cout << "El numero: " << dato << " se ha encontrado en la posicion del arreglo:" << mitad << endl;
	}
	
	getch();
	return 0;
}

