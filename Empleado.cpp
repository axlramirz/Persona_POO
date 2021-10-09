#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona{
	//atributo 
	private: 	int codigo_empleado;
				string puesto;
	//constructor
	public:
	Empleado(){
	}
	Empleado(string name, string lname, string address, string birthday, int phone, int code, string position) : Persona (name, lname, address, birthday, phone){
		codigo_empleado = code;
		puesto = position;
	}
	void agregar(){
		cout<<"______________________"<<endl;
		cout<<"Codigo: "<<codigo_empleado<<endl;
		cout<<"Nombre: "<<nombres<<endl;
		cout<<"Apellido: "<<apellidos<<endl;
		cout<<"Puesto: "<<puesto<<endl;
		cout<<"Direccion: "<<direccion<<endl;
		cout<<"F. Nacimiento: "<<nacimiento<<endl;
		cout<<"Telefono #: "<<telefono<<endl;
}
	//set (modificar atributos de una clase)
	void setcode(int code){
		codigo_empleado = code;
	}
	void setNombres(string name){
		nombres = name;
	}
	void setApellidos(string lname){
		apellidos = lname;
	}
	void setPuesto(string position){
		puesto = position;
	}
	void setDireccion(string address){
		direccion = address;
	}
	void setNacimiento(string birthday){
		nacimiento = birthday;
	}
	void setTelefono(int phone){
		telefono = phone;
	}
	//get (mostrar tributos de una clase)
	int getCode(){
		return codigo_empleado;
	}
	string getNombres(){
		return nombres;
	}
	string getApellidos(){
		return apellidos;
	}
	string getPuesto(){
		return puesto;
	}
	string getDireccion(){
		return direccion;
	}
	string getNacimiento(){
		return nacimiento;
	}
	int getTelefono(){
		return telefono;
	}
};
