#include <iostream>
using namespace std;
class Estudiante{
	// atributos
	protected : string nombres,apellidos;
				int nota1, nota2, nota3;
	// costructor
	protected : 
		Estudiante(){
		}
		Estudiante(string nom,string ape,int no1, int no2, int no3){
			nombres = nom;
			apellidos = ape;
			nota1 = no1;
			nota2 = no2;
			nota3 = no3;
		}
	
	// metodos
	void mostrar();
	
};
