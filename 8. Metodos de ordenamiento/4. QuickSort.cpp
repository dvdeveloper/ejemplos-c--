#include <iostream>
#include <conio.h>

using namespace std;

void intercambio(float &x, float &y){
	float aux;
	
	aux = x;
	x = y;
	y = aux;
}

void quickSort(float a[], int primero, int ultimo){
	int i, j , central;
	float pivote;
	
	central = (primero + ultimo) / 2;
	pivote = a[central];
	i = primero;
	j = ultimo;
	
	do{
		
		while(a[i] < pivote) i++;
		while(a[j] > pivote) j--;
		
		if(i<=j){
			intercambio(a[i],a[j]);
			i++;
			j--;
		}
		
	}while(i <= j);
	
	if(primero < j){
		quickSort(a,primero,j);
	}
	
	if(i < ultimo){
		quickSort(a,i,ultimo);
	}
	
}

int main (){
	
	float num_desordenado[] = {6,4,1,2,3,5};
	int i;
	
	quickSort(num_desordenado,0,5); //0 = inicio arreglo, 5 = última posición del arreglo
	
	
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

