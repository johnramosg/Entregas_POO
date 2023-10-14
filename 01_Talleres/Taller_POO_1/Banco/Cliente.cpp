#include <iostream>
#include "Cliente.h"

using namespace std;

Cliente::Cliente()
{
}

Cliente::Cliente(string _nombre, string _identificacion, string _telefono)
{
  nombre = _nombre;
  identificacion = _identificacion;
  telefono = _telefono;
}

void Cliente::setNombre(string _nombre)
{
  nombre = _nombre;
}

void Cliente::setIdentificacion(string _identificacion)
{
  identificacion = _identificacion;
}

void Cliente::setTelefono(string _telefono)
{
  telefono = _telefono;
}

string Cliente::getNombre()
{
  return nombre;
}

string Cliente::getIdentificacion()
{
  return identificacion;
}

string Cliente::getTelefono()
{
  return telefono;
}

Cliente::~Cliente()
{
}