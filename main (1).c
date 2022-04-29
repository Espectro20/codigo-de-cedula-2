//Nombre: Arian Martinez Mateo
//Matricula: 2021-1919
//Asignatura: fundamento de programacion
//Maestro: Carlos Pichardo
//Periodo: 2022-C1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define pos 5

int copy = 0;
char cpy[100] = "\0";

struct dates
{
    char nom[100];
    char fecha[10];
    int id;
    char sex;
} cedula[pos];

int main()
{/*                  Introducción de Datos                   */
    for (int j=0; j < pos; j++)
    {
  printf("Escribe el nombre de la cedula #%i: \n", j+1);  
   gets(cedula[j].nom);
    fflush(stdin);

  printf("Escribe el numero de cedula #%i: \n" , j+1);
    scanf("%i",&cedula[j].id);
    fflush(stdin);

  printf("Escribe la fecha de nacimiento de la cedula #%i: \n", j+1);  
   gets(cedula[j].fecha);
    fflush(stdin);