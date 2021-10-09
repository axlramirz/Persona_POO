#include "Cliente.cpp"
#include "Empleado.cpp"
#include<iostream>
using namespace std;
main(){
	string c_nit, c_nombre, c_apellido, c_direccion, c_nacimiento, c_puesto;
	int c_telefono, c_code;
	cout<<"Ingrese codigo: ";
	cin>>c_code;
	cout<<"Ingrese NIT: ";
	cin>>c_nit;
	cout<<"Ingrese Nombres: ";
	cin>>c_nombre;
	cout<<"Ingrese Apellidos: ";
	cin>>c_apellido;
	cout<<"Ingrese Puesto: ";
	cin>>c_puesto;
	cout<<"Ingrese direccion de residencia: ";
	cin>>c_direccion;
	cout<<"Ingrese fecha de nacimiento: ";
	cin>>c_nacimiento;
	cout<<"Ingrese numero de telefono: ";
	cin>>c_telefono;
	//instancia de un objeto
	Cliente cliente_cpp = Cliente(c_nombre, c_apellido, c_direccion, c_nacimiento, c_telefono, c_nit);
	cliente_cpp.agregar();
	Empleado empleado_cpp = Empleado(c_nombre, c_apellido, c_direccion, c_nacimiento, c_telefono, c_code, c_puesto);
	empleado_cpp.agregar();
}
