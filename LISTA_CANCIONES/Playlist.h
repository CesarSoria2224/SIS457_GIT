#pragma once
#include "cancion.h"
#include <vector>
class playlist
{
private:
	vector<cancion> lista;
	string nombre;
	string descripcion;
public:
	void agregarCancion(cancion c);
	void eliminarCancion(int nroCancion);
	void verLista();
	cancion buscarCancion(string titulo);
};
