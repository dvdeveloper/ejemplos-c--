#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numeros[] = {1,2,3,4,5}; //vector de 5 elementos
	int multiplicacion = 1;
	
	for(int i=0; i<5; i++){
		multiplicacion *= numeros[i];
	}
	
	cout << "Resultado de la multiplicacion del vector es: " << multiplicacion;
	
	getch();
	return 0;
}
