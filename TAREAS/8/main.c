#include<stdio.h>
#include<stdlib.h>
#define p 5/9;
int main(int arcgc, char*argu[]){
	//argunme 1 es entero
	int Ag1;
	//Ag2 es flot
	float Ag2, resu;
	Ag1=atoi(argu[1]);
	Ag2=atof(argu[2]);
	//se pregunta Ag1
	if (Ag1==1){
		resu=Ag2-32;
		resu=resu*p;
	}
	//1 o 0
	else{
		resu=Ag2*1.8;
		resu=resu+32;
	}
	printf("%.2f\n",resu);
	return 0;
}	