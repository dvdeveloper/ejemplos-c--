#include <iostream>

using namespace std;

int main(){
	
	float practica,teorica,participacion,promedio=0;
	
	cout << "Digite la practica nota: "; cin >> practica;
	cout << "Digite la teorica nota: "; cin >> teorica;
	cout << "Digite la participacion nota: "; cin >> participacion;
	
	practica 		*= 0.30;
	teorica 		*= 0.60;
	participacion 	*= 0.10;
	
	promedio = practica + teorica + participacion;
	
	cout.precision(2);
	cout << "\nEl promedio final es: " << promedio;
	
	return 0;
}
