#include <iostream>
#include <conio.h>

using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno{
	char nombre[20];
	struct Promedio notas;
}alumno1;


int main (){
	
	int n_atletas,pos=0,mayor=0;
	float promedio;
	
	cout << "Digite el nombre: ";
	cin.getline(alumno1.nombre,20,'\n');
	
	cout << "\n ****Notas del alumno**** \n ";
	cout << "Nota 1: ";
	cin >> alumno1.notas.nota1;
	
	cout << "Nota 2: ";
	cin >> alumno1.notas.nota2;
	
	cout << "Nota 3: ";
	cin >> alumno1.notas.nota3;
	
	promedio = (alumno1.notas.nota1+alumno1.notas.nota2+alumno1.notas.nota3)/3;
	
	//imprimir promedio
	cout << "\nNombre:" << alumno1.nombre << endl;
	cout << "\Promedio:" << promedio << endl;
	
	
	
	getch();
	return 0;
}

