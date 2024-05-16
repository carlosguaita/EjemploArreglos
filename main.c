#include <stdio.h>

int main (int argc, char *argv[]) {

    double costos[5]={2.45,4.23,523,456.43,45.3};
    for (int i = 0; i < 5; i++)
    {
        printf("El elemento %d del arreglo es: %.2lf\n",i,costos[i]);
    }
    printf("----------------------------------\n");
    costos[1]=0;
    costos[4]=1; 
     
    for (int i = 0; i < 5; i++)
    {
        printf("El elemento %d del arreglo es: %.2lf\n",i,costos[i]);
    }
    double temp = costos[2]*3;
    printf("El resultado de la operacion es: %lf\n",temp);


    



    return 0;
}