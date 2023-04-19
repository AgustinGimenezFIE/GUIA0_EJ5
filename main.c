#include <stdio.h>

/*
 EJERCICIO 5
 Escriba una función que intercambie el valor de dos variables enteras utilizando
punteros y los muestre antes y después del intercambio por pantalla
 */

void intercambio(int *x, int *y){
    int *aux; // Declaro puntero aux
    printf("\n ANTES DE INTERCAMBIO : Valor de V1 : %d , Valor de V2 %d",*x,*y);
    aux=x; // al puntero aux le asigno la direccion de memoria de x
    x=y; // a x le asigno la direccion de memoria de y
    y=aux; // Asigno a y , la direccion de memoria de x guardada antes
    printf("\n VARIABLES DENTRO FUNCION INTERCAMBIADAS V1 : %d , Valor de V2 %d",*x,*y);
}

int main() {

    int x=0 , y=0;
    printf("Ingrese Valor Variable 1 : ");
    scanf("%d",&x);
    printf("\n Ingrese Valor Variable 2 :");
    scanf("%d",&y);
    printf("\n Valores Ingresados : \n Variable 1 : %d \n Variable 2 : %d",x,y);
    intercambio(&x,&y);
    printf("\n VARIABLES FUERA FUNCION NO INTERCAMBIADAS V1 : %d , Valor de V2 %d",x,y);

    return 0;
}

