#include <stdio.h>
#include <stdlib.h>

int num1;
int num2;
float suma;
float resta;
float multi;
float divv;

int main(int argc, char*argu[]){
    num1=atoi(argu[1]);
    num2=atoi(argu[2]);
    suma=num1+num2;
    resta=num1-num2;
    multi=num1*num2;
    divv=num1/num2;
    printf("%.3f\n",suma);
    printf("%.3f\n",resta);
    printf("%.3f\n",multi);
    printf("%.3f\n",divv);
    
    return 0;
    
}