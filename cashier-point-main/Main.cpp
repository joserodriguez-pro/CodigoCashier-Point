#include "Cliente.cpp"
#include "Tarjeta.cpp"
#include "TCredito.cpp"
#include "Vigencia.cpp"
#include "CAcceso.cpp"
#include "TMovimientos.cpp"
#include "DRelevantes.cpp"
#include "DepRet.cpp"
#include "DRSaldo.cpp"
#include "CMovimientos.cpp"
#include "CAutomatico.cpp"
#include "CBancaria.cpp"
#include "DRelevantesHM.cpp"

#include <stdlib.h>
#include <iostream>


int main(void)
{
	// Creating a client object with the Empty constructor
	
	Vigencia vigencia1("12","24");
	Cliente cliente1("Alejandro", "GT091183MP", "San Miguel");
	CAcceso acceso1("****");
	Tarjeta tarjeta1("29015", "721", "901734", vigencia1);
	TMovimientos movientos;
	DRelevantes relevantes("Alessandra","392132","10mn 09/04/2021");
	DepRet datosdepret("$4,000.00");
	DRSaldo Saldo("$10,000.00");
	CMovimientos consulta("$2,000.00","$3,000.00",datosdepret,relevantes);
	CAutomatico CajeroAutomatico("BBVA Bancomer.","394132.","La Normal.");
	CBancaria CuentaBancaria("Credito","390214","Alessandra Martinez Betancourt","1. Retiro de $500 (10/09/2021)");
	DRelevantesHM HistorialdeM("$500","$5,000.00");
	

	TCredito tc1(1050.75, "30219273", "781", "80174238", vigencia1);
	
	cout << " " << endl;
	cout << " " << endl;
	cout << "======================================================== Cajero automatico-Ingreso del cliente =================================================================" <<endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "   *Numero de tarjeta (1):  " << tarjeta1.getNumDePlastico() << endl;
	cout << "   *Ingrese la contrasena:  " << acceso1.getPassword() << endl;
	cout << " " << endl;
	cout << " " << endl;
        // Creating an client object with the non-empty constructor
	cout << "========================================================= Cajero automatico-Datos del cliente ==================================================================" <<endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "   *Nombre:  " << cliente1.getNombre() << endl;
	cout << "   *RFC:     " << cliente1.getRFC() << endl;
	cout << "   *Nombre:  " << cliente1.getDomicilio() << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "================================================================== Datos de la tarjeta =========================================================================" <<endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "   *Nombre (cliente):                         " << cliente1.getNombre() << endl;
	cout << "   *Numero de tarjeta (1):                    " << tarjeta1.getNumDePlastico() << endl;
	cout << "   *Balance de tarjeta de credito:            " << tc1.getBalanceAlCorte() << endl;
	cout << "   *tarjeta de credito, numero en plastico:   " << tc1.getNumDePlastico() << endl;  
	cout << "   *tarjeta de credito, numero de seguridad:  " << tc1.getNumDeSeguridad() << endl;  
	cout << "   *tarjeta de credito, numero de cuenta:     " << tc1.getNumDeCuenta() << endl;  
	cout << " " << endl;
	cout << " " << endl;
	cout << "================================================================== Tipos de movimientos ===========================================================================" <<endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "   *Validacion del cliente. " << movientos.getValidarAlcliente() << endl;
	cout << "   *Consultar saldo. " << movientos.getConsultarSaldo() << endl;
	cout << "   *Depositar en efectivo. " << movientos.getDepositarEnEfectivo() << endl;
	cout << "   *Retirar en efectivo. " << movientos.getRetirarDeEfectivo() << endl;  
	cout << "   *Almacenar movientos. " << movientos.getAlmacenarMovimientos() << endl;  
	cout << "   *Consultar movimientos. " << movientos.getConsultarMovimientos() << endl;  
	cout << " " << endl;
	cout << " " << endl;
	cout << "============================================================ Datos relevantes de los movimientos ====================================================================" <<endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "   *Nombre del cliente:  " << relevantes.getNombreDelCliente() << endl;  
	cout << "   *Numero de cuenta:    " << relevantes.getNumeroDeCuenta() << endl;  
	cout << "   *Fecha:               " << relevantes.getFecha() << endl;  
	cout << " " << endl;
	cout << " " << endl;
	cout << "==================================================================== Datos de la tarjeta ============================================================================" <<endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "   *Nombre del cliente:  " << cliente1.getNombre() << endl;
	cout << "   *Numero de cuenta:    " << tc1.getNumDeCuenta() << endl;  
	cout << " " << endl;
	cout << " " << endl;
	cout << "================================================================ Datos del deposito o retiro ========================================================================" <<endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "   *Datos:  " << datosdepret.getImporte() << endl;  
	cout << " " << endl;
	cout << " " << endl;
	cout << "=============================================================== Datos de la consulta de saldo =======================================================================" <<endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "   *Su saldo actual es de:  " << Saldo.getelSaldoActual() << endl;  
	cout << " " << endl;
	cout << " " << endl;
	cout << "============================================================ Datos de la consulta de movimientos ====================================================================" <<endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "   *Consulta de retiro:    " << consulta.getelRetiro() <<"  ("<<datosdepret.getImporte()<<" / "<<relevantes.getFecha()<<" )"<< endl;
	cout << "   *Consulta de deposito:  " << consulta.getelDeposito() <<"  ("<<datosdepret.getImporte()<<" / "<<relevantes.getFecha()<<" )"<< endl; 
	cout << " " << endl;
	cout << " " << endl; 
	cout << "================================================================ Datos del cajero automatico ========================================================================" <<endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "   *Nombre del banco:    " << CajeroAutomatico.getelNomBanco() << endl; 
	cout << "   *Codigo unico:        " << CajeroAutomatico.getelCodigoUnico() << endl;
	cout << "   *Numero de sucursal:  " << CajeroAutomatico.getelNumSucursal() << endl; 
	cout << " " << endl;
	cout << " " << endl; 
	cout << "================================================================ Datos de la cuenta bancaria ========================================================================" <<endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "   *Tipo de cuenta:            " << CuentaBancaria.getelTipoCuenta() << endl; 
	cout << "   *Numero de cuenta:          " << CuentaBancaria.getelNumeroCuenta() << endl;
	cout << "   *Cliente asociado:          " << CuentaBancaria.getelClienteAsociado() << endl;
	cout << "   *Historial de movimientos:  " << CuentaBancaria.getelHistorialMovimientos() << endl;  
	cout << " " << endl;
	cout << " " << endl;
	cout << "================================================== Datos relevantes del historial de movimientos del cliente ========================================================" <<endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "   *Consulta de retiro:    " << HistorialdeM.getDepositos()<< endl;
	cout << "   *Consulta de deposito:  " << HistorialdeM.getRetiros() << endl; 
	cout << " " << endl;
	cout << " " << endl;  
	cout << "=====================================================================================================================================================================" <<endl;
	return EXIT_SUCCESS;
}


