#include<iostream>
using namespace std;
//Cree la clase Netflix
class Netflix{
  private:
    string zona;
    string peliculas;
    string series;
  public:
    Netflix(string zona, string peliculas, string series);
    void netflix();
    void recomendaciones_zona();
    void peliculas_zona();
    void novedades_zona();

};