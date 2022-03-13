#include "Estudiante.cpp"
#include <iostream>
using namespace std;

class Alumno : Estudiante{
  // atributos
  private : int nota1, nota2, nota3, promedio;
  private : string aprobado;
  // constructor
  public :
  Alumno(){
  }
  Alumno(string nom,string ape,int no1,int no2,int no3) : Estudiante(nom,ape,nota1,nota2,nota3){ 
  nota1 = no1;
  nota2 = no2;
  nota3 = no3;
  }
  
  int getPromedio(int no1, int no2, int no3)
  {
  promedio = (no1 + no2 + no3); 
  return promedio; 
  }
  
  string getAprobo(int promedio)
  {   	  
	aprobado = promedio >= 60 ? "Aprobo" : "Reprobo";
	return aprobado;
  }
  
void mostrar(){
	
 promedio = getPromedio(nota1, nota2, nota3);
 aprobado = getAprobo(promedio);

	cout<<"______________________"<<endl;
	cout<<nombres<<","<<apellidos<<","<<nota1<<","<<nota2<<","<<nota3<<","<<promedio<<","<<aprobado<<endl;
}
};
