#include "Persona.cpp"
#include <iostream>
using namespace std;
class Cliente : Persona{
	//atributo
	private: 	string nit;
	//constructor
	public:
	Cliente(){
	}
	Cliente(string name, string lname, string address, string birthday, int phone, string tributario):Persona(name, lname,address,birthday,phone){
	nit = tributario;
	}
	void agregar(){
		cout<<"______________________"<<endl;
		cout<<"NIT: "<<nit<<endl;
		cout<<"Nombre: "<<nombres<<endl;
		cout<<"Apellido: "<<apellidos<<endl;
		cout<<"Direccion: "<<direccion<<endl;
		cout<<"F. Nacimiento: "<<nacimiento<<endl;
		cout<<"Telefono #: "<<telefono<<endl;
	}
	//set (modificar atributos de una clase)
	void setNit(string n){
		nit = n;
	}
	void setNombres(string name){
		nombres = name;
	}
	void setApellidos(string lname){
		apellidos = lname;
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
	string getNit(){
		return nit;
	}
	string getNombres(){
		return nombres;
	}
	string getApellidos(){
		return apellidos;
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
