#ifndef COLORES_H_INCLUDED
#define COLORES_H_INCLUDED

struct
{
    int id;
    char descripcion[20];
} typedef eColores;

#endif // COLORES_H_INCLUDED

int cargarDescripcionColor(int id, eColores colores[],int tam, char descripcion[]);

int mostrarColor(eColores unColor);

int mostrarColores(eColores colores[], int tam);
