#include<iostream>
#include<string>
#include "Camion.h"
using namespace std;

Camion::Camion(string laPlaca, int laCapacidadMaxima)
{
  placaCamion = laPlaca;
  capacidadMaxima = laCapacidadMaxima;
  pesoTotalCargado = 0;
}
bool Camion::cargarUnObjeto(int pesoDelObjeto)
{
  if (pesoTotalCargado + pesoDelObjeto <= capacidadMaxima)
  {
    pesoTotalCargado += pesoDelObjeto;
    return true;
  }
  else
    return false;
}
int Camion::hacerMudanza()
{
  return pesoTotalCargado;
}
string Camion::cualEsLaPlaca()
{
  return placaCamion;
}