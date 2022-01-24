#include <iostream>

using namespace std;

int main(){
	
	int numero;
	
	cout << "Digite un numero: ";
	cin >> numero;
	
	if(numero==0){
		
		cout << "El número es cero";
		
	}else if(numero%2==0){ //divide el resultado en 2 y se calcula el resultado, por ende, lo numeros impar se dividen en 2 y el resultado es 0
		
		cout << "El numero es par";
		
	}else{
		
		cout << "El numero es impar";
	}
	
	return 0;
}
