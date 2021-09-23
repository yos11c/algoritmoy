 /* "calcular el cambio de moneda de dolares a quetzales, según el cambio del día" */

#include <iostream>
using namespace std;
int main (void)

	double precioActual,dolares,quetzales;
	cout << "Ingrese el precio actual del dolar en quetzales: " << end1;
	cin>> precioActual;
	cout << "Ingrese la cantidad de dolares: " << end1;
	cin >> dolares;
	
	quetzales = dolares * precioActual;
	
	cout << dolares << "dólares equivales a " << quetzales << "quetzales. " << end1;