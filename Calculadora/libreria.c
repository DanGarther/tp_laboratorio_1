
#include "libreria.h"


int sumaDeNumeros(int num1, int num2){

int total;

total = num1 + num2;

return total;
}


int resta(int num1, int num2){

int result;

result = num1 - num2;

return result;

}


int multiplicar(int num1, int num2){

    int result;

result = num1 * num2;

return result;

}


int dividir(int num1, int num2){

int result;

result = num1 / num2;

return result;


}


int factorial(int num1, int num2){
int num3;
int i;
int total=1;

num3 = num1 + num2;

for(i = num3; i >= 1; i--){



    total = total * i;



}

return num3;
}
