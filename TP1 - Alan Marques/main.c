#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

int main()
{
    int opcion, num=0, num2=0, suma, resta, multiplicacion, factorial, flag1=0, flag2=0, flag3=0, flag4=0;
    float division;

    do
    {
        if(num==0)
        {
            printf("\t-CALCULADORA-\n\n1)Ingresar primer operando (A=X)\n");
        }
        else
        {
            printf("\t-CALCULADORA-\n\n1)Ingresar primer operando (A=%d)\n", num);
            flag2=1;
        }

        if(num2==0)
        {
            printf("2)Ingresar segundo operando (B=Y)\n");
        }
        else
        {
            printf("2)Ingresar segundo operando (B=%d)\n", num2);
            flag3=1;
        }

        if(flag4==0)
        {
            printf("3)Calcular todas las operaciones:\n  A)Calcular la Suma (A+B)\n  B)Calcular la Resta (A-B)\n  C)Calcular la Division (A/B)\n  D)Calcular la multiplicacion(A*B)\n  E)Calcular el factorial(A!)\n\n");
        }
        else if(flag2==1 && flag3==1)
        {
            printf("3)Calcular todas las operaciones:\n  A)Calcular la Suma (%d+%d)\n  B)Calcular la Resta (%d-%d)\n  C)Calcular la Division (%d/%d)\n  D)Calcular la multiplicacion(%d*%d)\n  E)Calcular el factorial(%d!)\n\n", num, num2, num, num2, num, num2, num, num2, num);
        }

        printf("4)Informar Resultados.\n");
        printf("5)Salir.\n");
        printf("\nLa opcion a elegir es: ");
        scanf("%d", &opcion);

       switch(opcion)
       {
        case 1:
            system("cls");
            printf("\t-CALCULADORA-\n\n1)Ingresar primer operando (A=X): ");
            scanf("%d", &num);
            break;
        case 2:
            system("cls");
            printf("\t-CALCULADORA-\n\n2)Ingresar segundo operando (B=Y): ");
            scanf("%d", &num2);
            break;
        case 3:
            flag4=1;
            suma = funcionSuma(num, num2);
            resta = funcionResta(num, num2);
            division = funcionDivision((float)num,(float)num2);
            multiplicacion = funcionMultiplicacion(num, num2);
            factorial = funcionFactorial(num);
            flag1=1;
            break;
        case 4:
            if(flag1==0)
            {
                printf("Primero debe de realizar las operaciones.\n");
                system("pause");
                break;
            }
            system("cls");
            printf("\t-CALCULADORA-\n\n\t(A=%d)  (B=%d)\n\nA)El resultado de A+B es: %d\nB)El resultado de A-B es: %d\nC)El resultado de A/B es: %.2f\nD)El resultado de A*B es: %d\nE)El factorial de A es: %d\n\n", num, num2, suma, resta, division, multiplicacion, factorial);
            system("pause");
        case 5:
            break;
        default:
            system("cls");
            printf("Ingrese una opcion valida. \n\n");
            system("pause");
            break;
       }
        system("cls");

    }while(opcion!=5);

    return 0;
}
//Alan Marques
