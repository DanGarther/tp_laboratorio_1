#include <stdio.h>
#include <stdlib.h>
#include <libreria.h>

int main()
{
    int num1;
    int num2;
    int result;
    char respues;

    printf("Ingrese primer numero: \n");
    fflush(stdin);
    scanf("%d", &num1);
    printf("Ingrese segundo numero: \n");
    fflush(stdin);
    scanf("%d", &num2);

    do{
        printf("¿Que desea hacer con estos numeros?\n");
        printf("1) Sumarlos.\n");
        printf("2) Restarlos.\n");
        printf("3) Multiplicarlos.\n");
        printf("4) Dividirlos.\n");
        printf("5) Factorizarlos.\n");
        printf("6) Salir.\n");
        fflush(stdin);
        scanf("%c", &respues);


        switch(respues){
        case '1':
        result = suma(int num1, int num2);

        break;

        case '2':

        result = resta(int num1, int num2);

        break;

        case '3':
        result = multiplicar(int num1, int num2);
        break;

        case '4':
        result = dividir(int num1, int num2);
        break;

        case '5':
        result = num1-num2;
        break;

        default:

        printf("¿Desea salir?\n");
        fflush(stdin);
        scanf("%c", &respues);
        break;
        }


  printf("Su resultado es %d \n", result);


 system("pause");
 system("cls");

    }while(respues != 's');



    return 1;

}
