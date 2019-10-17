#include <stdio.h>
#include <stdlib.h>

float num1;
float num2;
float suma;
float resta;
float multi;
float divv;

int main(int argc, char*argu[]){
    num1=atof(argu[1]);
    num2=atof(argu[2]);
    suma=num1+num2;
    resta=num1-num2;
    multi=num1*num2;
    divv=num1/num2;
    printf("%.2f\n",suma);
    printf("%.2f\n",resta);
    printf("%.2f\n",multi);
    printf("%.2f\n",divv);
    
    return 0;
    
}