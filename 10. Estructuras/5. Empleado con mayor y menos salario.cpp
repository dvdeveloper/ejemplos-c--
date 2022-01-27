#include <iostream>
#include <conio.h>

using namespace std;

struct Empleado{
	char nombre[20];
	float salario;
}emp[100];


int main (){
	
	int n_empleados,posMayor=0,posMenor=0;
	float mayor = 0, menor = 999999;
	
	cout << "Digite el numero de empleados:";
	cin >> n_empleados;
	
	for(int i = 0; i < n_empleados; i ++ ){
		
		fflush(stdin); //limpiar buffer
		
		cout << i+1 << ". Digite su nombre: ";
		cin.getline(emp[i].nombre,20,'\n');
		
		cout << i+1 << ". Digite su salario: ";
		cin >> emp[i].salario;
		
		cout << "\n";
		
		if(emp[i].salario > mayor){
			mayor = emp[i].salario;
			posMayor = i;
		}
		if(emp[i].salario < menor){
			mayor = emp[i].salario;
			posMenor = i;
		}
	}
	
	//imprimir empleado con el mejor salario
	cout << "\nNombre:" << emp[posMayor].nombre << endl;
	cout << "\Salario:" << emp[posMayor].salario << endl;
	
	cout << "\n";
	//imprimir empleado con el menor salario
	cout << "\nNombre:" << emp[posMenor].nombre << endl;
	cout << "\Salario:" << emp[posMenor].salario << endl;
	
	
	getch();
	return 0;
}

