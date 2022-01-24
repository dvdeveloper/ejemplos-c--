#include <iostream>

using namespace std;

int main(){
	
	float precio, iva, precioFinal;
	
	cout << "digite el precio del producto: ";
	cin>>precio;
	
	iva = precio * 0.19;
	precioFinal = precio + iva;
	
	cout << "\n El precio final es: " <<precioFinal << endl;
	
	return 0;
}
