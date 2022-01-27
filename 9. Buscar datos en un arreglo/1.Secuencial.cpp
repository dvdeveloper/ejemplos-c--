#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	int a[] = {3,4,2,1,5};
	int i,dato;
	char flag = 'F';
	
	dato = 1; //dato a buscar
	i=0;
	while((flag == 'F') && (i<5)){
		if(a[i] == dato){
			flag = 'V';
		}
		i++;
	}
	
	if(flag == 'F'){
		cout << "El numero a buscar no existe en el arreglo" << endl;
	}else{
		cout << "El numero: " << dato << " se ha encontrado en la posicion del arreglo:" << (i-1) << endl;
	}
	
	
	getch();
	return 0;
}

