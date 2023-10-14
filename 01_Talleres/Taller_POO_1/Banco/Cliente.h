#ifndef CLIENTE_HH
#define CLIENTE_HH
#include <string>
using namespace std;

class Cliente
{
private:
  string nombre;
  string identificacion;
  string telefono;

public:
  Cliente();
  Cliente(string nombre, string identificacion, string telefono);
  void setNombre(string nombre);
  void setIdentificacion(string identificacion);
  void setTelefono(string telefono);
  string getNombre();
  string getIdentificacion();
  string getTelefono();
  ~Cliente();
};

#endif