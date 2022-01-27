#include <iostream>
#include <conio.h>

using namespace std;

struct Atleta{
	char nombre[20];
	char pais[20];
	int numero_medalladas;
}atletas[100];


int main (){
	
	int n_atletas,pos=0,mayor=0;
	
	cout << "Digite el numero de atletas:";
	cin >> n_atletas;
	
	for(int i = 0; i < n_atletas; i ++ ){
		
		fflush(stdin); //limpiar buffer
		
		cout << i+1 << ". Digite su nombre: ";
		cin.getline(atletas[i].nombre,20,'\n');
		
		cout << i+1 << ". Digite su pais: ";
		cin.getline(atletas[i].pais,20,'\n');
		
		cout << i+1 << ". Digite cantidad de medallas: ";
		cin >> atletas[i].numero_medalladas;
		
		cout << "\n";
		
		if(atletas[i].numero_medalladas > mayor){
			mayor = atletas[i].numero_medalladas;
			pos = i;
		}

	}
	
	//imprimir atleta con mas medallas
	cout << "\nNombre:" << atletas[pos].nombre << endl;
	cout << "\Pais:" << atletas[pos].pais << endl;
	cout << "\Medallas:" << atletas[pos].numero_medalladas << endl;
	
	
	
	getch();
	return 0;
}

