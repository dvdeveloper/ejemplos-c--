#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int i = 1;
	
	do{
		cout << i << endl;
		i++; //aumentar el iterador
	}
	while(i<=10);
	
	i = 10;
	
	do{
		cout << i << endl;
		i--; //decrementa el iterador
	}
	while(i>=1);
	
	system("pause"); //pausar para cerrar la ventana
	return 0;
}
