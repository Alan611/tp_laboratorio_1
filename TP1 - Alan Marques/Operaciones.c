#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

/** \brief Funcion para sumar dos numeros enteros, y devolviendo uno de mismo tipo.
 *
 * \param num int
 * \param num2 int
 * \return int
 *
 */
int funcionSuma(int num, int num2)
{
    int resultado;
    resultado = num + num2;
    return resultado;
}

/** \brief Funcion para restar dos numeros enteros, y devolviendo uno de mismo tipo.
 *
 * \param num int
 * \param num2 int
 * \return int
 *
 */
int funcionResta(int num, int num2)
{
    int resultado;
    resultado = num - num2;
    return resultado;
}

/** \brief Funcion para dividir dos numeros decimales, devolviendo un numero decimal y tiene verificacion con 0.
 *
 * \param num float
 * \param num2 float
 * \return float
 *
 */
float funcionDivision(float num, float num2)
{
    float resultado;
    while(num2==0)
    {
        printf("No se puede hacer division por 0. Ingrese un nuevo divisor: ");
        scanf("%f", &num2);
    }
    resultado = num / num2;
    return resultado;
}

/** \brief Funcion para multiplicar dos numeros enteros y devolviendo uno de mismo tipo.
 *
 * \param num int
 * \param num2 int
 * \return int
 *
 */
int funcionMultiplicacion(int num, int num2)
{
    int resultado;
    resultado = num * num2;
    return resultado;
}

/** \brief Funcion para calcular el factorial de un entero, y devuelve un numero del mismo tipo.
 *
 * \param num int
 * \return int
 *
 */
int funcionFactorial(int num)
{
    int factorial=1, i;
    for(i=1;i<=num;i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
