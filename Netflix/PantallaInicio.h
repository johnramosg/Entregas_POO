#include<iostream>

using namespace std;

class PantallaInicio{
  private:
    string ID;
    string nombreUsuario;
    string peliculasVistas;
    string seriesVistas;

  public:
    PantallaInicio(string ID,string nombreUsuario, string peliculasVistas,string seriesVistas);
    void cuentaNetflix();
    void historiall();
    void novedades();
    void recomendaciones();
    void top10();
};