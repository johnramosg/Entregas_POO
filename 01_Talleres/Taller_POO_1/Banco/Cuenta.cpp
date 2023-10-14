#include <iostream>
#include "Cuenta.h"

using namespace std;

Cuenta::Cuenta()
{
}

Cuenta::Cuenta(string _numeroCuenta, int _saldoCuenta)
{
  numeroCuenta = _numeroCuenta;
  saldoCuenta = _saldoCuenta;
}

void Cuenta::setNumeroCuenta(string _numeroCuenta)
{
  numeroCuenta = _numeroCuenta;
}

void Cuenta::setSaldoCuenta(int _saldoCuenta)
{
  saldoCuenta = _saldoCuenta;
}

string Cuenta::getNumeroCuenta()
{
  return numeroCuenta;
}

int Cuenta::getSaldoCuenta()
{
  return saldoCuenta;
}

void Cuenta::consignar(int _dinero){
  int dinero=0;
  dinero=_dinero;
  saldoCuenta=getSaldoCuenta()+dinero;
  setSaldoCuenta(saldoCuenta);
}
void Cuenta::retirar(int _dinero){
  int dinero = 0;
  dinero = _dinero;
  saldoCuenta = getSaldoCuenta() - dinero;
  setSaldoCuenta(saldoCuenta);
}