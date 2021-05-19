#include "tipo.h"
#include "colores.h"

#ifndef BICICLETA_H_INCLUDED
#define BICICLETA_H_INCLUDED

struct
{
    int id;
    char marca[20];
    int idTipo;
    int idColor;
    int rodado;
    int isEmpty;
} typedef eBicicleta;

#endif // BICICLETA_H_INCLUDED

int inicializarBiciletas(eBicicleta lista[], int tam);

int agregarBicicleta(eBicicleta lista[], int tam, int id, char marca[], int idTipo,int idColor, int rodado);

int altaBicicleta(eBicicleta lista[], int tam, int* punteroId);

int buscarLibre(eBicicleta lista[], int tam);

int encontrarBicicletaConId(eBicicleta lista[], int tam,int id);

int modificarBicicleta(eBicicleta lista[], int tam);

int bajaBicicleta(eBicicleta lista[], int tam);

int mostrarBicicletas(eBicicleta lista[], int tam,eTipo tipos[],int tamt,eColores colores[], int tamcol);

int mostrarBicicleta(eBicicleta unaBicicleta,eTipo tipos[],int tamt,eColores colores[], int tamcol);

int ordenarBicicletas(eBicicleta lista[], int tam);

int buscarBicicleta(eBicicleta lista[], int tam, int id);
