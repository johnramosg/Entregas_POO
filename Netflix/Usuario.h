#include<iostream>
using namespace std;

class Usuario{
  private:
    string usuarios[3];
    string nombre;
    string contraseña;
    int pantalla;
    
  public:
    Usuario();
    void setUsuario(string usuario);
    string getUsuario();
    void setpantalla(int pantalla);
    int getpantalla();
    void setcontraseña(string contraseña);
    string getcontraseña();
    void setnombre(string nombre);
    string getnombre();
    void ingresar();
    ~Usuario();
};
