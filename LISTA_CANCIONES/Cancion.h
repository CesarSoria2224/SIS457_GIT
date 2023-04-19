#pragma once
#include <string>
#include "Artista.h"
using namespace std;
struct Tiempo
{
	int minuto;
	int segundo;
};
class cancion
{
private:
	string titulo;
	Tiempo duracion;
	Artista compositor;

public:
	cancion();
	cancion(string _nombre, int m, int s,Artista comp);
	cancion(string _titulo, Tiempo t, Artista comp);
	cancion(string _titulo, Tiempo t);
	float ObtenertiempoSegundo();
	void formatearDuracion();
	void verInfo();

	string getTitulo()
	{
		return titulo;
	};
};
