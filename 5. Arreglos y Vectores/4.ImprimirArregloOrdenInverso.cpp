#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numeros[] = {1,2,3,4,5}; //vector de 5 elementos
	int multiplicacion = 1;
	
	for(int i=4; i>=0; i--){
		cout << numeros[i] << endl;
	}
	
	getch();
	return 0;
}
