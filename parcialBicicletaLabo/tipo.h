#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED

struct
{
    int id;
    char descripcion[20];
} typedef eTipo;

#endif // TIPO_H_INCLUDED

int cargarDescripcionTipo(int id, eTipo tipos[],int tam, char descripcion[]);

int mostrarTipo(eTipo unTipo);

int mostrarTipos(eTipo tipos[], int tam);
