#include<iostream>
using namespace std;
//Cree la clase PantallaInicio
class PantallaInicio{
  private:
    string ID;
    string nombreUsuario;
    string peliculasVistas;
    string seriesVistas;

  public:
    PantallaInicio(string ID,string nombreUsuario, string peliculasVistas,string seriesVistas);
    void cuentaNetflix();
    void historial();
    void novedades();
    void recomendaciones();
    void top10();
};