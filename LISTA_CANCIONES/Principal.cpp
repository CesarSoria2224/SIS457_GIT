#include <iostream>
#include <vector>
#include <string>
#include "Cancion.h"
#include "Playlist.h"
using namespace std;

int main()
{
    Tiempo t1;
    playlist lista1;
    playlist favoritos;
    playlist latinos;
    cout << "hola" << endl;
    cout << "hola mucho gusto" << endl;
    int numero;
    do {
        cout << "seleccione alguna opcion " << endl;
        cout << "1. Mostrar canciones de la lista 1" << endl;
        cout << "2. Mostrar canciones de la lista de favoritos" << endl;
        cout << "3. Mostrar canciones de la lista de latinos" << endl;
        cout << "0. Salir" << endl;
        cin >> numero;

        switch (numero) {
        case 1:
            cout << "Canciones de la lista 1:" << endl;
            lista1.verLista();
            cout << "llorando se fue" << endl;
            break;
        case 2:
            cout << "Canciones de la lista de favoritos:" << endl;
            favoritos.verLista();
            break;
        case 3:
            cout << "Canciones de la lista de latinos:" << endl;
            latinos.verLista();
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "ingrese otra opcion" << endl;
            break;
        }
    } while (numero != 4);  
};

 
/*void imprimirRocola(vector<cancion> lista)
{
for (int i = 0; i < lista.size();i++)
{		//cout << lista[i].getTitulo()<<endl;
lista[i].verInfo();
}
}*/



/*vector<cancion> rocola;
	rocola.push_back(cancion("vete", 3, 35, Artista()));
	rocola.push_back(cancion());
	Tiempo t1;
	t1.minuto = 3;
	t1.segundo = 16;
	rocola.push_back(cancion("el silencio", t1));
	rocola.push_back(cancion("tu poeta",3,45, Artista()));
	Artista art("marama", "argentina", Genero::Rock);
	Tiempo d1;
	d1.minuto = 3;
	d1.segundo = 45;
	cancion can("noche", d1, art);
	rocola.push_back(can);

	cout << "creando la funcionalidad en la rockola" << endl;
	imprimirRocola(rocola);*/
