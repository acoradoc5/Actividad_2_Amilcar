#include "Persona.cpp"
#include <iostream>
using namespace std;

class Docente : Persona {
	// atributos
	private : 
	string codigo;
	string nit;
	float salario;
	string profesion;
	
	//constructor
	public : 
	Docente (){
	}
	Docente(string cui,string nom,string ape,string dir,string fe_na,int tel,bool gen,string cod,string n,float sal,string pro) : Persona(cui,nom,ape,dir,fe_na,tel,gen){
		codigo = cod;
		nit = n;
		salario = sal;
		profesion = pro;
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
	void setcodigo(string cod){codigo = cod;}
	void setnit(string n){nit = n;}
	void setsalario(float sal){salario = sal;}
	void setprofesion(string pro){profesion = pro;}
	//get (mostrar)
	string getcui(){return cui;}
	string getnombres(){return nombres;}
	string getapellidos(){return apellidos;}
	string getdireccion(){return direccion;}
	string getfecha_nacimiento(){return fecha_nacimiento;}
	int gettelefono(){return telefono;}
	bool getgenero(){return genero;}
	string getcodigo(){return codigo;}
	string getnit(){return nit;}
	float getsalario(){return salario;}
	string getprofesion(){return profesion;}

	void leer();
};