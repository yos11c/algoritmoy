/*Un programa que permita el ingreso de nombre del alumno y 3 notas de un alumno y calcular su promedio, al final mostrar el nombre y el promedio del alumno.*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct alumno{
	char nombre [21];
	struct Promedio prom;
}alumno;

int main (){
	float promedio_alumno;
	
	
	cout <<"Escribir su nombre: ";
	cin.getline(alumno.nombre,21, '\n');
	
	cout<< "\n. : Notas del alumno:.\n";
	cout<<nota1: "; cin>>alumno.prom.n.nota1";
	cout<<nota2: "; cin>>alumno.prom.n.nota2";
	cout<<nota3: "; cin>>alumno.prom.n.nota3";
	
	promedio_alumno = (alumno.prom.n.nota1+alumno.prom.n.nota2+alumno.prom.n.nota3)/3;
	
	cout<<"\nDatos del Alumno\n";
	cout<<"Nombre: "<<alumno.nombre<<end;
	cout<<"Promedio final del alumno es: "<<promedio_alumno<<end;
	
}

	
	