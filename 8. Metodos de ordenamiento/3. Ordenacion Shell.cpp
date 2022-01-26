#include <iostream>
#include <conio.h>

using namespace std;

void intercambio(float &x, float &y){
	float aux;
	aux = x;
	x = y;
	y = aux;
}

void ordenacionShell(float a[], int n){
	int salto,i,j,k;
	salto = n/2;
	
	while(salto > 0){
		for(i = salto; i < n; i ++){
			j = i - salto;
			while(j >= 0){
				k = j + salto;
				if(a[j] <= a[k]){
					j = -1;
				}else{
					intercambio(a[j],a[k]);
					j -= salto;
				}
			}
		}
		salto = salto/2;
	}
}

int main (){
	
	float num_desordenado[] = {6,4,1,2,3,5};
	int i;
	
	ordenacionShell(num_desordenado,6);
	
	
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

