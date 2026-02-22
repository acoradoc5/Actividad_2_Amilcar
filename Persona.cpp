#include <iostream>	
using namespace std;
class Persona{
	//atributos
	protected : string cui,nombres,apellidos,direccion,fecha_nacimiento;
	          int telefono;
	          bool genero;
	// constructo
	protected : 
	       Persona (){
	       }
	Persona(string cui,string nom,string ape,string dir,string fe_na,int tel,bool gen){
		cui = cui;
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		fecha_nacimiento = fe_na;
		telefono = tel;
		genero = gen;
		
        	}
	
	// metodo
	void mostrar ();
};