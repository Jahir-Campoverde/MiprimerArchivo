#include<stdio.h>
int main(){
    int a;
    int b;
printf("BIENVENIDO A MI PRIMER CODIGO\n");

printf("SUMA \n");
    //  suma de dos numeros
    printf("coloque el primer numero:\n");
    scanf("%i",&a);
    printf("Ahora coloque el segundo numero:\n");
    scanf("%i",&b);
    int m = a + b;
    printf("El resultado es:%i\n",m);

printf("RESTA \n");
// resta de dos numeros
    int l;
    int e;
printf("coloque el primer numero:\n");
    scanf("%i",&l);
    printf("Ahora coloque el segundo numero:\n");
    scanf("%i",&e);
    int x = l - e;
    printf("El resultado es:%i\n",x);
//suma de decimales
printf("AHORA VAMOS A SUMAR NUMEROS DE DOS DECIMALES:\n");
float le;
float vi;
printf("Escribe el primer decimal:\n");
scanf("%f",&le);
printf("Escribe el segundo numero decimal:\n");
scanf("%f",&vi);
float ci = le + vi;
printf("El resultado de la suma decimal es:%.2f\n",ci);


    return 0;
     
}