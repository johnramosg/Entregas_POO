#include<iostream>
using namespace std;
//Cree la clase de pelicula
class Pelicula{
  private:
    string modID;
    string titulo;
    int fechayear;
    string listaActores;
    string productora;
    int precioCompra;
  public:
    Pelicula(string modID, string titulo,int fechayear,string listaActores,string productora,int precioCompra);
    void getmodid();
    void gettitulo();
    void getfechaAno();
    void getProductora();
    void precioCompra();
};