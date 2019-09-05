#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

int main()
{
    int num1;
    int num2;
    int result;
    char respues;



    do{


        printf("Elija una opcion por favor.0\n");
        printf("0) Ingresar datos.\n");
        printf("1) Sumarlos.\n");
        printf("2) Restarlos.\n");
        printf("3) Multiplicarlos.\n");
        printf("4) Dividirlos.\n");
        printf("5) Factorizarlos.\n");
        printf("6) Salir.\n");
        fflush(stdin);
        scanf("%c", &respues);


        switch(respues){

       case '0':

    printf("Ingrese primer numero: \n");
    fflush(stdin);
    scanf("%d", &num1);
    printf("Ingrese segundo numero: \n");
    fflush(stdin);
    scanf("%d", &num2);



        case '1':

           result = sumaDeNumeros(num1, num2);
          printf("Su resultado es %d \n", result);

        break;

        case '2':

        result = resta(num1, num2);
         printf("Su resultado es %d \n", result);

        break;

        case '3':
        /** \brief
         *
         * \param num1
         * \param num2
         * \return result=
         *
         */
        result = multiplicar(num1, num2);
         printf("Su resultado es %d \n", result);
        break;

        case '4':
        result = dividir(num1, num2);
         printf("Su resultado es %d \n", result);

        break;

        case '5':
       result = factorial(num1, num2);
         printf("Su resultado es %d \n", result);

        break;

        case '6':

        printf("¿Desea salir?\n");
        fflush(stdin);
        scanf("%c", &respues);
        break;

        default:

            printf("No es una opcion valida\n");

        break;

        }





 system("pause");
 system("cls");

    }while(respues != 's');



    return 0;

}
