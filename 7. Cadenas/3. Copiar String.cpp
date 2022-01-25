#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main (){
	
	char nombre[] = "Diego";
	char nombre2[10];

	strcpy(nombre2,nombre); //destino,origen
	
	cout << nombre2 << endl;
	
	getch();
	return 0;
}

