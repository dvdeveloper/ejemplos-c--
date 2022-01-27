#include <iostream>
#include <conio.h>

using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}
p1 = {"Diego",31},
p2 = {"XXX",15};

int main (){
	
	cout << "Nombre1: " << p1.nombre << " Edad1: " << p1.edad << endl;
	cout << "Nombre2: " << p2.nombre << " Edad2: " << p2.edad << endl;
	
	//ALMACENAR INPUT EN STRUCT
	
	cout << "Escriba el nombre ";
	cin.getline(p1.nombre,20,'\n');
	
	cout << "Digite su edad ";
	cin >> p1.edad;
	
	cout << "NombreX: " << p1.nombre << " EdadX: " << p1.edad << endl;
	
	
	getch();
	return 0;
}

