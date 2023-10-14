#include<iostream>
#include"Cliente.h"
#include "Cuenta.h"

using namespace std;

int main(){
  Cuenta carlos;

  //carlos.consignar(3000);
  //carlos.consignar(3000);
  cout << carlos.getSaldoCuenta()<<endl;
  carlos.consignar(40000);
  cout << carlos.getSaldoCuenta()<<endl;
  carlos.retirar(5000);
  cout << carlos.getSaldoCuenta() << endl;
}