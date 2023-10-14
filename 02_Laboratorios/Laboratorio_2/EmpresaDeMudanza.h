#include <iostream>
#include <string>
#include <vector>

using namespace std;

class EmpresaDeMudanza
{
private:
string nombreEmpresa;
string nitEmpresa;

public:
EmpresaDeMudanza(string nombreEmpresa,string nitEmpresa);
void comprarCamion(string placa,int capacidadMaxima);
void cargarLosCamiones(vector<int> objetos);

};