#include "Persona.cpp"
#include <iostream>
using namespace std;

class Estudiante : Persona {
	// atributos
	private : 
	string carnet;
	
	//constructor
	public : 
	Estudiante (){
	}
	Estudiante(string cui,string nom,string ape,string dir,string fe_na,int tel,bool gen,string car) : Persona(cui,nom,ape,dir,fe_na,tel,gen){
		carnet = car;
	}
		//metodos
	//set (modificar)
	void setcui(string cui){cui = cui;}
	void setnombres(string nom){nombres = nom;}
	void setapellidos(string ape){apellidos = ape;}
	void setdireccion(string dir){direccion = dir;}
	void setfecha_nacimiento(string fe_na){fecha_nacimiento = fe_na;}
	void settelefono(int tel){telefono = tel;}
	void setgenero(bool gen){genero = gen;}
	void setcarnet(string car){carnet = car;}
	//get (mostrar)
	string getcui(){return cui;}
	string getnombres(){return nombres;}
	string getapellidos(){return apellidos;}
	string getdireccion(){return direccion;}
	string getfecha_nacimiento(){return fecha_nacimiento;}
	int gettelefono(){return telefono;}
	bool getgenero(){return genero;}
	string getcarnet(){return carnet;}

	void leer();
};