#include"Pelicula.h"
//Inicialice el constructor Pelicula
Pelicula::Pelicula(string _modID, string _titulo, int _fechayear, string _listaActores, string _productora, int _precioCompra){
  string modID,titulo,listaActores,productora;
  int fechayear,precioCompra;

  modID=_modID;
  titulo=_titulo;
  fechayear=_fechayear;
  listaActores=_listaActores;
  productora=_productora;
  precioCompra=_precioCompra;
}