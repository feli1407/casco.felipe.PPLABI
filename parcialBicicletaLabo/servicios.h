#ifndef SERVICIOS_H_INCLUDED
#define SERVICIOS_H_INCLUDED

struct
{
    int id;
    char descripcion[25];
    int precio;
} typedef eServicio;

#endif // SERVICIOS_H_INCLUDED

int mostrarServicio(eServicio unServicio);

int mostrarServicios(eServicio servicios[], int tam);

int validarIdServicio(int id, eServicio servicios[],int tam);

int cargarDescripcionServicio(int id, eServicio servicios[],int tam, char descripcion[]);
