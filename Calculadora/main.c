#include <stdio.h>
#include <stdlib.h>

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
        result = num1+num2;
        break;

        case '2':
        result = num1-num2;
        break;

        case '3':
        result = num1*num2;
        break;

        case '4':
        result = num1/num2;
        break;

        case '5':
        result = num1-num2;
        break;

        case '6':

        printf("¿Desea salir?\n");
        fflush(stdin);
        scanf("%c", &respues);
        break;
        }


  printf("Su resultado es %d \n", result);


    }while(respues != 's');



    return 0;

}
