#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "funciones.h"
#include "tipo.h"
#include "colores.h"
#include "servicios.h"
#include "bicicleta.h"
#include "trabajo.h"
#define TAMT 4
#define TAMCOL 5
#define TAMS 4
#define TAMBICI 1000
#define TAMTRA 1000


int main()
{

    int idBicicleta=50000;
    int idTrabajo=10000;
    int flagAlta=0;//flag para validar si se dio de alta algun cliente
    char salir='n';//Confirmacion para salir del programa

    //hardcodeo tipo
    eTipo tipos[TAMT]=
    {
        {1000,"Rutera"},
        {1001,"Carrera"},
        {1002,"Mountain"},
        {1003,"BMX"}
    };

    //hardcodeo colores
    eColores colores[TAMCOL]=
    {
        {5000,"Gris"},
        {5001,"Negro"},
        {5002,"Blanco"},
        {5003,"Azul"},
        {5004,"Rojo"}
    };

    //hardcodeo Servicios
    eServicio servicios[TAMS]=
    {
        {20000,"Limpieza",250},
        {20001,"Parche",300},
        {20002,"Centrado",400},
        {20003,"Cadena",350}
    };

    eBicicleta bicicletas[TAMBICI];
    if(!(inicializarBiciletas(bicicletas,TAMBICI)))
    {
        printf("Ocurrio un error al inicializar bicicletas\n");
    }

    eTrabajos trabajos[TAMTRA];
    if(!(inicializarTrabajos(trabajos,TAMTRA)))
    {
        printf("Ocurrio un error al inicializar bicicletas\n");
    }

    do
    {
        system("cls");
        switch(menu())
        {
        case 1:
            system("cls");
            printf("ALTA BICICLETA\n");
            if(altaBicicleta(bicicletas,TAMBICI,&idBicicleta))
            {
                printf("Alta exitosa\n");
                flagAlta = 1;
            }
            else
            {
                printf("Ocurrio un problema con el alta\n");
            }
            break;
        case 2:
            if(flagAlta==1)
            {
                system("cls");
                printf("MODIFICAR BICICLETA\n");
                if(!(modificarBicicleta(bicicletas,TAMBICI)))
                {
                    printf("Ocurrio un error al modificar al cliente\n");
                }
            }
            else
            {
                printf("Primero debe dar de alta una bicicleta\n");
                system("pause");
            }
            break;
        case 3:
            if(flagAlta==1)
            {
                system("cls");
                printf("BAJA BICICLETA\n");
                if(!(bajaBicicleta(bicicletas,TAMBICI)))
                {
                    printf("Hubo un error al dar de baja la bicicleta\n");
                }
            }
            else
            {
                printf("Primero debe dar de alta una bicicleta\n");
                system("pause");
            }
            break;
        case 4:
            if(flagAlta==1)
            {
                system("cls");
                printf("LISTAR BICICLETA\n");
                if(!(mostrarBicicletas(bicicletas,TAMBICI,tipos,TAMT,colores,TAMCOL)))
                {
                    printf("Ocurrio un error al mostrar las bicicletas\n");
                }
                system("pause");
            }
            else
            {
                printf("Primero debe dar de alta una bicicleta\n");
                system("pause");
            }
            break;
        case 5:
            system("cls");
            printf("LISTAR TIPOS\n");
            if(!(mostrarTipos(tipos,TAMT)))
            {
                printf("Ocurrio un error al mostrar los tipos\n");
            }
            break;
        case 6:
            printf("LISTAR COLORES\n");
            if(!(mostrarColores(colores,TAMCOL)))
            {
                printf("Ocurrio un error al mostrar los colores\n");
            }
            break;
        case 7:
            printf("LISTAR SERVICIOS\n");
            if(!(mostrarServicios(servicios,TAMS)))
            {
                printf("Ocurrio un error al mostrar los servicios\n");
            }
            break;
        case 8:
            if(flagAlta==1)
            {
                printf("ALTA TRABAJO\n");
                if(!(altaTrabajo(trabajos,TAMTRA,colores,TAMCOL,bicicletas,TAMBICI,servicios,TAMS,tipos,TAMT,&idTrabajo)))
                {
                    printf("Ocurrio un error al dar de alta el trabajo\n");
                }
            }
            else
            {
                printf("Primero debe dar de alta una bicicleta\n");
                system("pause");
            }

            break;
        case 9:
            printf("LISTAR TRABAJOS\n");
            if(!(mostrarTrabajos(trabajos,TAMTRA,servicios,TAMS)))
            {
                printf("Ocurrio un error al mostrar trabajos\n");
            }
            break;
        case 10:
            printf("SALIR\n");
            printf("Estas seguro que deseas salir? (s o n)\n");
            fflush(stdin);
            salir = getchar();
            break;
        }

    }
    while(salir=='n');
    return 0;

}
