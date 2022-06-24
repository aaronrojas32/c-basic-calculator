/*
Nombre del programa: calculadora.c
Descripcion: Programa que pide dos numeros y luego desplega un menú para elegir la opccion que quieres elegir
Autor: Aaron Rojas Gutierrez
Fecha 23/06/2022
Version: 1.1
*/

#include <stdio.h>

//Declaramos las directivas para el procesador

void pideNum(int*);
void selecMenu(int*);
int suma(int,int);
int resta(int,int);
int multi(int,int);
float divi(int,int);
void menu(int,int,int);

//Iniciamos la funcion principal

int main(){
    //Creamos las variables para alamcenar los valores 
    int num1,num2,men,rep;

    //Llamamos a las funciones para recoger los numeros y desplegar el menu
    pideNum(&num1);
    pideNum(&num2);
    selecMenu(&men);
    menu(men,num1,num2);
    //Creamos un apartado para repetir el programa
    printf("Si desea repetir el programa pulse 1, si no, pulse cualqier otro numero\n");
    scanf("%d",&rep);
    if(rep==1){
        main();
    }
    else{
        printf("Fin del programa\n");
    }

    return 0;
}

/*
 * @function: pideNum
 * @description: Recoge un numero y lo almacena por referencia
 * @param: int
 * @return: void
*/

void pideNum(int *num){
    printf("Introduzca un numero: \n");
    scanf("%d",num);
}

/*
 * @function: selecMenu
 * @description: Despliega el menu y recoge la eleccion del usuario
 * @param: int
 * @return: void
*/

void selecMenu(int *men){
    printf("Selecione la opcion que desea: \n");
    printf("1.Suma \n");
    printf("2.Resta \n");
    printf("3.Multiplicacion \n");
    printf("4.Division \n");
    
    scanf("%d",men);
}

/*
 * @function: suma
 * @description: Suma dos numeros
 * @param: int
 * @return: int
*/

int suma(int num1,int num2){
    int suma;
    suma=num1+num2;

    return suma;
}

/*
 * @function: resta
 * @description: Resta dos numeros
 * @param: int
 * @return: int
*/

int resta(int num1,int num2){
    int resta;
    resta=num1-num2;

    return resta;
}

/*
 * @function: multi
 * @description: Multiplica dos numeros
 * @param: int
 * @return: int
*/

int multi(int num1,int num2){
    int multi;
    multi=num1*num2;

    return multi;
}

/*
 * @function: divi
 * @description: Divide dos numeros
 * @param: int
 * @return: float
*/

float divi(int num1,int num2){
    float divi;
    divi=(float)num1/num2;

    return divi;
}

/*
 * @function: menu
 * @description: Ejecuta las diferentes funciones
 * @param: int
 * @return: void
*/

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
        printf("La division de %d y %d es: %g \n",num1,num2,div);
        break;
    }
}
