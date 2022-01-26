#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	int num_desordenado[] = {6,4,1,2,3,5};
	int i,pos,aux;
	
	
	for(i=0; i < 6; i++){ //recorre cada elemento del array
		pos = i;
		aux = num_desordenado[i];
		
		while( (pos>0) && (num_desordenado[pos-1] > aux )){
			num_desordenado[pos] = num_desordenado[pos-1];
			pos--;
		}
		
		num_desordenado[pos] = aux;
		
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

