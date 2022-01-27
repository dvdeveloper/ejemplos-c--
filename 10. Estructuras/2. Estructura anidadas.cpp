#include <iostream>
#include <conio.h>

using namespace std;

struct info_direccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2]; //se define un arreglo de estructura

int main (){
	
	for(int i = 0; i < 2; i++){
		
		fflush(stdin); //vaciar el buffer y permitir digitar los valores
		
		cout << "Digite su nombre: ";
		cin.getline(empleados[i].nombre,20,'\n');
		cout << "Escriba su direccion: ";
		cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
		cout << "Escriba su ciudad: ";
		cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
		cout << "Escriba su provincia: ";
		cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
		cout << "Digite el salario: ";
		cin >> empleados[i].salario;
		
		cout << "\n"; //salto de linea
		
	}
	
	//imprimir datos;
	
	for(int i = 0; i < 2; i++){
		cout << "Nombre"<<i<<": " << empleados[i].nombre << endl;
		cout << "Direccion "<<i<<": " << empleados[i].dir_empleado.direccion << endl;
		cout << "Ciudad "<<i<<": " << empleados[i].dir_empleado.ciudad << endl;
		cout << "Provincia "<<i<<": " << empleados[i].dir_empleado.provincia << endl;
		cout << "Salario "<<i<<": " << empleados[i].salario << endl;
		
		cout << "\n"; //salto de linea
	}
	
	
	getch();
	return 0;
}

