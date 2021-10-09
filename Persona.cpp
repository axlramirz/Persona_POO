#include <iostream>
using namespace std;
class Persona{
	//atributos
	protected: 	string nombres, apellidos, direccion, nacimiento;
				int telefono;
	//constructor
	protected:
	Persona(){
	}
	Persona(string name, string lname, string address, string birthday, int phone){
		nombres = name;
		apellidos = lname;
		direccion = address;
		nacimiento = birthday;
		telefono = phone;
	}
	void agregar();
};
