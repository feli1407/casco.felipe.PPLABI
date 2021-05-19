#ifndef FECHAS_H_INCLUDED
#define FECHAS_H_INCLUDED

//estructura fecha
typedef struct
{
    int dia;
    int mes;
    int anio;

} fechas;

int compararFechas(fechas f1,fechas f2);

#endif // FECHAS_H_INCLUDED
