#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numeros[] = {1,2,3,4,5}; //vector de 5 elementos
	int suma = 0;
	
	for(int i=0; i<5; i++){
		suma = suma + numeros[i];
	}
	
	cout << "Resultado de la suma del vector es: " << suma;
	
	getch();
	return 0;
}
