#include "Cancion.h"
#include "playlist.h"
#include <iostream>
cancion::cancion()
{
	titulo = "llorando se fue";
	duracion.minuto = 4;
	duracion.segundo = 45;
};

cancion::cancion(string _titulo, int m, int s, Artista comp)
{
	titulo = _titulo;
	duracion.minuto = m;
	duracion.segundo = s;
	compositor = comp;
};

cancion::cancion(string _titulo, Tiempo t, Artista comp)
{
	titulo = _titulo;
	duracion = t;
	compositor = comp;
};

cancion::cancion(string _titulo, Tiempo t)
{
	titulo = _titulo;
	duracion = t;
};

void cancion::verInfo()
{
	cout<<titulo<<" "<<duracion.minuto<< " : "<<duracion.segundo<<"  "<<
		compositor.getNombre()<<"  "<<compositor.getProcedencia() << endl;
}


float cancion::ObtenertiempoSegundo()
{
	int minutos = duracion.minuto * 60;
	int segundos = duracion.segundo / 60;
	float tiempoSegundos = minutos * 60 + segundos;
	return tiempoSegundos;
};