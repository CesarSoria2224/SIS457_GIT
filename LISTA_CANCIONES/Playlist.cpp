#include "Playlist.h"
#include "Cancion.h"
#include <iostream>
using namespace std;


/*void playlist::agregarCancion(cancion c) {


    bool canrepetida = false;

    for (int i = 0; i < lista.size(); i++) 
    {
        if (lista[i] == c)
        {
            canrepetida = false;
        }
    }
    if (!canrepetida) 
    {
        lista.push_back(c);
        cout << "se agrego la cancion" << endl;
        
    } else 
    {
        cout << "la cancion ya existe" << endl;
    }
}*/

void playlist::eliminarCancion(int nroCancion)
{
    if (nroCancion >= 0 && nroCancion < lista.size()) 
    {
        lista.erase(lista.begin() + nroCancion);
        cout << "la cancion fue eliminada" << endl;
    } else 
    {
        cout << "el numero de cancion no existe" << endl;
    }
}

void playlist::verLista() 
{
    cout << "Lista de canciones:" << endl;
    for (int i = 0; i < lista.size(); i++) 
    {
        cout << i+1 << ". "<<endl;
        lista[i].verInfo();
    }
}

cancion playlist::buscarCancion(string titulo)
{
    for (int i = 0; i < lista.size(); i++)
    {
        if (lista[i].getTitulo() == titulo) 
        {
            return lista[i];
        }
    }
    cancion cancionVacia;
    return cancionVacia;
}

    //mostrar las canciones
    //Nro cancion  /   Titulo   / duracion (mm:ss
        //1         Te voy a Extraniar   03:40
        //2         It´s my Life         04:30
        //3         Bla Bla Bla           07:33