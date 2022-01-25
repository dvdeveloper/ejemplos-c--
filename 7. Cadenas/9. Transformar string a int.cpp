#include <iostream>
#include <conio.h>
#include <stdlib.h> //funcion atoi y atof

using namespace std;

int main (){
	
	char numero[] = "123456";
	char flotante[] = "19.55";
	
	int numero_convertido;
	float numero_flotante;
	
	numero_convertido = atoi(numero);
	
	cout << numero_convertido << endl;
	
	
	numero_flotante = atof(flotante);
	
	cout << numero_flotante << endl;
	
	getch();
	return 0;
}

