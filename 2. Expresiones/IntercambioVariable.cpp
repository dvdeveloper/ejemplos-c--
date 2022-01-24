#include <iostream>

using namespace std;

int main(){
	
	int x,y,aux;
	
	cout<<"Digite el valor de x: "; 
	cin >> x;
	
	cout<<"Digite el vlaor de y: "; 
	cin >> y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nEl nuevo valor de x es: " << x;
	cout<<"\nEl nuevo valor de y es: " << y;
	
	return 0;
}
