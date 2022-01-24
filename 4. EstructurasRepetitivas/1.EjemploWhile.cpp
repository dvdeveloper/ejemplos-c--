#include <iostream>
#include <conio.h> //función getch para no cerrar ventana

using namespace std;

int main(){
	
	int i = 1;
	
	//aumentar el i
	while(i <= 10){
		cout << i << endl;
		i++;
	}
	
	//orden inverso
	i=10;
	
	while(i >= 1){
		cout << i << endl;
		i--;
	}
	
	getch(); //con esto no se cierra la pantalla
	return 0;
}
