#include <iostream>

using namespace std;

int main(){
	
	float a,b, resultado = 0;
	
	cout << "Digite el valor de a: "; cin >> a;
	cout << "Digite el valor de b: "; cin >> b;
	
	resultado = (a/b)+1;
	
	cout.precision(2); //permite definir la cantidad de decimal despues de la coma
	cout << "\n El resultado es: " << resultado <<endl;
	
	return 0;
}
