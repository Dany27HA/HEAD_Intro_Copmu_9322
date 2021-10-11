
#include <iostream>
#include <stdio.h>

//Funcion
int SumaDatos(int a, int b)
{

    int resultado;
    resultado = a + b;

    return resultado;
}

int main(int argc, char** argv)
{
    //Suma de dos numeros, pedidos por el teclado
    
    //Declaracion de variables
    int iDato1;
    int iDato2;
    int iResultado;

    printf("\n------SUMA DE DATOS [DOS DATOS]------\n");

    //Lectura de datos
    printf("Ingresa tu primer numero ");
    scanf_s("%d", &iDato1);

    printf("Ingresa tu segundo numero ");
    scanf_s("%d", &iDato2);

    //operacion

    iResultado =SumaDatos(iDato1, iDato2);

    //Imprimir resultado
    printf("El resultado de la suma es: %d", iResultado);

    return 0;

}