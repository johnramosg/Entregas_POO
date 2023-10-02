#include "Usuario.h"

Usuario::Usuario()
{
  usuarios[0] = "Usuario1";
  usuarios[1] = "Usuario2";
  usuarios[2] = "Usuario3";
  nombre = "";
  contraseña = "";
  pantalla = 0;
}
void Usuario::setUsuario(string usuario)
{
  nombre = usuario;
}
string Usuario::getUsuario()
{
  return nombre;
}
void Usuario::setpantalla(int pantalla)
{
  this->pantalla = pantalla;
}
int Usuario::getpantalla()
{
  return pantalla;
}
void Usuario::setcontraseña(string contraseña)
{
  this->contraseña = contraseña;
}
string Usuario::getcontraseña()
{
  return contraseña;
}
void Usuario::setnombre(string nombre)
{
  this->nombre = nombre;
}
string Usuario::getnombre()
{
  return nombre;
}
void Usuario::ingresar()
{
  int opcion;
  cout << "1. Iniciar Sesion" << endl;
  cout << "2. Registrarse" << endl;
  cout << "Ingrese la opcion: ";
  cin >> opcion;
  switch (opcion)
  {
  case 1:
    cout << "Ingrese el nombre de usuario: ";
    cin >> nombre;
    cout << "Ingrese la contraseña: ";
    cin >> contraseña;
    for (int i = 0; i < 3; i++)
    {
      if (usuarios[i] == nombre && contraseña == "123")
      {
        cout << "Bienvenido " << nombre << endl;
        pantalla = 1;
        break;
      }
    }
    if (pantalla == 0)
    {
      cout << "Usuario o contraseña incorrectos" << endl;
    }
    break;
  case 2:
    cout << "Ingrese el nombre de usuario: ";
    cin >> nombre;
    cout << "Ingrese la contraseña: ";
    cin >> contraseña;
    cout << "Usuario creado correctamente" << endl;
    break;
  default:
    cout << "Opcion invalida" << endl;
    break;
  }
}
Usuario::~Usuario()
{
}