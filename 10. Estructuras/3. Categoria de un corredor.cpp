#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct Corredor{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
}c1;


int main (){
	
	char categoria[20];
	

	cout << "Nombre: ";
	cin.getline(c1.nombre,20,'\n');
	
	cout << "Edad: ";
	cin >> c1.edad;
	
	fflush(stdin); //limpiar buffer para no saltar el campo sexo
	
	cout << "Sexo: ";
	cin.getline(c1.sexo,20,'\n');
	
	cout << "Club: ";
	cin.getline(c1.club,20,'\n');
	
	
	
	if(c1.edad <= 18){
		
		strcpy(categoria,"Juvenil");
		
	}
	else if(c1.edad <= 40){
		
		strcpy(categoria,"Senior");
		
	}else{
		
		strcpy(categoria,"Veterano");
		
	}
	
	//imprimir datos del corredor
	
	cout << "\n =====Datos del corredor====" << endl;
	cout << "Nombre: " << c1.nombre << endl;
	cout << "Edad: " << c1.edad << endl;
	cout << "Sexo: " << c1.sexo << endl;
	cout << "Club: " << c1.club << endl;
	cout << "Categoria: " << categoria << endl;
	
	getch();
	return 0;
}

