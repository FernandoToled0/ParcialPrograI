// cambio para el repositorio remoto
#include "Alumno.cpp"
#include <iostream>
using namespace std;
main(){
	string nombres,apellidos;
	int nota1, nota2, nota3;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese nota 1: ";
	cin>>nota1;
	cout<<"Ingrese nota 2: ";
	cin>>nota2;
	cout<<"Ingrese nota 3: ";
	cin>>nota3;
	// instanciar un objeto
	Alumno obj = Alumno(nombres,apellidos,nota1,nota2,nota3);
	obj.mostrar();

}
