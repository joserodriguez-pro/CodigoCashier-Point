#ifndef DRELEVANTES_HPP
#define DRELEVANTES_HPP
#include <string>


using namespace std;
class DRelevantes
{
	private:
		string nombreDelCliente;
		string numeroDeCuenta;
		string fecha;
		
	public:

	    DRelevantes();
        DRelevantes(string elNombreDelCliente, string elNumeroDeCuenta, string laFecha);
		string getNombreDelCliente();
		string getNumeroDeCuenta();
		string getFecha();
		
};





#endif