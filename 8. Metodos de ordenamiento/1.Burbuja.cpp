#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	int num_desordenado[] = {6,4,1,2,3,5};
	int i,j,aux;
	
	
	for(i=0; i < 6; i++){ //recorre cada elemento del array
		for(j=0; j < 6; j++){ //validar si el elemento actual con el siguiente es mayor
			if(num_desordenado[j] > num_desordenado[j+1]){
				aux = num_desordenado[j];
				num_desordenado[j] = num_desordenado[j+1];
				num_desordenado[j+1] = aux;
			}
		}
	}
	
	
	
	cout << "Orden Ascendente: ";
	for(i=0; i < 6; i++){
		cout << " " << num_desordenado[i];
	}
	
	cout << endl << "Orden Descendente: ";
	for(i=5; i>=0;i--){
		cout << num_desordenado[i] << " ";
	}
	
	getch();
	return 0;
}

