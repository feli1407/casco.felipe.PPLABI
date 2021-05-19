#include "funciones.h"
#include "tipo.h"
#include "colores.h"
#include "servicios.h"
#include "bicicleta.h"
#include "fechas.h"

#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED

struct
{
    int id;
    int idBicicleta;
    int idServicio;
    fechas fechaTrabajo;
    int isEmpty;
} typedef eTrabajos;

#endif // TRABAJO_H_INCLUDED

int inicializarTrabajos(eTrabajos trabajos[], int tam);

int buscarLibreTrabajo(eTrabajos trabajos[], int tam);

int altaTrabajo(eTrabajos trabajos[], int tamt, eColores colores[],int tamcol ,eBicicleta bicicletas[], int tamb,
eServicio servicios[], int tams, eTipo tipos[],int tamtip, int* pNextIdTrabajo);

void mostrarTrabajo(eTrabajos unTrabajo, eServicio servicios[], int tams);

int mostrarTrabajos(eTrabajos trabajos[], int tamt, eServicio servicios[], int tams);
