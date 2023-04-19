#include "Artista.h"
#include "Cancion.h"
#include <iostream>
using namespace std;
Artista::Artista(string nom, string proc, Genero gen)
{
	nombre = nom;
	procedencia = proc;
	genero = gen;
}

Artista::Artista()
{
	nombre = "alex campos";
	procedencia = "sucre";
	genero = Baladas;
}

string  Artista::getNombre()
{
	return nombre;
}

string Artista::getProcedencia() {
	return procedencia;
}

void Artista::verInfo()
{
	cout<< nombre << "  " << procedencia << endl;
};