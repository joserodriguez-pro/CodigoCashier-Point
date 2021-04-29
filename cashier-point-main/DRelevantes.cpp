#include "DRelevantes.hpp"



DRelevantes::DRelevantes() {}

DRelevantes::DRelevantes(string elNombreDelCliente, string elNumeroDeCuenta,string laFecha)
{
	nombreDelCliente = elNombreDelCliente;
	numeroDeCuenta = elNumeroDeCuenta;
	fecha = laFecha;
	
}

string DRelevantes::getNombreDelCliente()
{
	return nombreDelCliente;
}

string DRelevantes::getNumeroDeCuenta()
{
	return numeroDeCuenta;
}	
string DRelevantes::getFecha()
{
	return fecha;
}	


