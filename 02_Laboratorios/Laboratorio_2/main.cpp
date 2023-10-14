#include <iostream>
#include <vector>
#include "EmpresaDeMudanza.h"
#include "Camion.h"

using namespace std;

int main()
{
  vector<int> objetos =
      {
          1000, 3000, 5000, 2000, 500, 1800, 4000, 30};
  EmpresaDeMudanza nuevaEmpresa("Camiones Mountain",
                                "2498024-9");
  nuevaEmpresa.comprarCamion("YUI-988", 10000);
  nuevaEmpresa.comprarCamion("OIJ-807", 5000);
  nuevaEmpresa.comprarCamion("KHO-193", 5000);
  cout<<nuevaEmpresa.cargarLosCamiones(objetos) << endl;
  return 0;
}