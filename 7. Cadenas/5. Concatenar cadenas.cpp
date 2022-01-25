#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main (){
	
	char palabra1[] = " Cadena 1 ";
	char palabra2[] = " Cadena 2 ";
	
	char concatenar[30];
	
	strcpy(concatenar,palabra1); //concatenar = Cadena 1
	strcat(concatenar,palabra2); //cancatenar = Cadena 1 Cadena 2
	
	cout << concatenar << endl;
	
	getch();
	return 0;
}

