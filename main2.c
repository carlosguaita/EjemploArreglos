#include <stdio.h>

int main (int argc, char *argv[]) {

    //char nombre[20];

    char nombres[5][20]={"Lorena",
                         "Juan",
                         "Maria",
                         "Luis",
                         "Ana"};


    //printf("Ingrese el nombre: ");
    //scanf("%s",&nombre);

    //printf("El nombre ingresado es %s\n",nombre);

    printf("El nombre en la posicion 3 es: %s",nombres[3]);



    return 0;
}