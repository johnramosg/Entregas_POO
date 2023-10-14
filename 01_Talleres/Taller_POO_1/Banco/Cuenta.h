#ifndef CUENTA_HH
#define CUENTA_HH
#include <string>
using namespace std;

class Cuenta
{
private:
  string numeroCuenta;
  int saldoCuenta=0;

public:
  Cuenta();
  Cuenta(string numeroCuenta, int saldoCuenta);
  void setNumeroCuenta(string numeroCuenta);
  void setSaldoCuenta(int saldoCuenta);
  string getNumeroCuenta();
  int getSaldoCuenta();
  void consignar(int dinero);
  void retirar(int dinero);
  //~Cuenta();
};

#endif