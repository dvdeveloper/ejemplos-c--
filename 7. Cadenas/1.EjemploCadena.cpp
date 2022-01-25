#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main (){
	
	char palabra[] = "Diego"; //primera forma de crear cadena de caracter
	char palabra2[] = {'D','I','E','G','O'}; //segunda forma de crear cadena de caracter
	
	char nombre[30]; //cadena máximo 30 caracteres, mala forma dado que despues de un espacio se corta el string
	cout << "Digite su nombre: ";
	cin >> nombre;
	
	cout << nombre << endl;
	
	//USANDO GETS LIBRERIA STRING.H
	cout << "Digite su nombre GETS: ";
	gets(nombre); //el problema es que utiliza más espacio de memoria
	
	cout << nombre << endl;
	
	//FORMA EFICIENTE
	cout << "Digite su nombre getline: ";
	cin.getline(nombre,30,'\n');  //"Variable, Cantidad de caracteres, Fin de String (salto de linea) "
	
	cout << nombre << endl;
	
	cout << palabra << endl;
	cout << palabra2 << endl;
	
	getch();
	return 0;
}

