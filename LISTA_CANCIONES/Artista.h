#pragma once
#include <string>
using namespace std;
enum Genero 
{ Rock, Baladas, Cumbia, Romatica};

class Artista
{
private:
	string nombre;
	string procedencia;
	Genero genero;
public:
	Artista(string nom, string proc, Genero gen);
	Artista();
	void verInfo();
	string getNombre();
	string getProcedencia();
};


