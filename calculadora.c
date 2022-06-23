#include <stdio.h>

void pideNum(int*);
void selecMenu(int*);
int suma(int,int);
int resta(int,int);
int multi(int,int);
float divi(int,int);
void menu(int,int,int);

int main(){
    int num1,num2,men;

    pideNum(&num1);
    pideNum(&num2);
    selecMenu(&men);
    menu(men,num1,num2);

    return 0;
}

void pideNum(int *num){
    printf("Introduzca un numero: \n");
    scanf("%d",num);
}

void selecMenu(int *men){
    printf("Selecione la opcion que desea: \n");
    printf("1.Suma \n");
    printf("2.Resta \n");
    printf("3.Multiplicacion \n");
    printf("4.Division \n");
    
    scanf("%d",men);
}

int suma(int num1,int num2){
    int suma;
    suma=num1+num2;

    return suma;
}

int resta(int num1,int num2){
    int resta;
    resta=num1-num2;

    return resta;
}

int multi(int num1,int num2){
    int multi;
    multi=num1*num2;

    return multi;
}

float divi(int num1,int num2){
    float divi;
    divi=(float)num1/num2;

    return divi;
}

void menu(int men,int num1,int num2){
    int sum,res,mul;
    float div;
    switch (men)
    {
    case 1:
        sum=suma(num1,num2);
        printf("La suma de %d y %d es: %d \n",num1,num2,sum);
        break;
    
    case 2:
        res=resta(num1,num2);
        printf("La resta de %d y %d es: %d \n",num1,num2,res);
        break;

    case 3:
        mul=multi(num1,num2);
        printf("La multiplicacion de %d y %d es: %d \n",num1,num2,mul);
        break;

    case 4:
        div=divi(num1,num2);
        printf("La division de %d y %d es: %d \n",num1,num2,div);
        break;
    }
}