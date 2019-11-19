#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Rpo(double a, double b, double c, double d){
	//función para las raices reales positivas
	double X1, X2;
	double p;
	p=sqtr(d);
	X1=(-b/2*a)+(p/2*a);
	X2=(-b/2*a)-(p/2*a);
	//formula general
	printf("%.2lf\n",X1);
	printf("%.2lf\n",X2);

}
//otra función para raices i
void Ri(double a, double b, double c, double d){
	double p;
	p=sqtr(-d);
	double X11,X12,X21,X22;
	X11=-b/(2*a); X12=p/(2*a);
	X21=-b/(2*a); X22=-p/(2*a);
	if(b==0){
		X11=0; X21=X11;
	}
	printf("%.2lf+%02lfi\n",X11,X12);
	printf("%.2lf%.2lfi\n",X21,X22);
}
//para una sola solución
void rU(double a,double b){
	double XU;
	XU=-b/(2*a);
	printf("%.2lf\n\n",XU);
}
int main (int argc, char*argu[]){
	double a,b,c;
	a=atof(argu[1]);b=atof(argu[2]);c=atof(argu[3]);
	double d;
	d=pow(b,2);
	d=d-(4*a*c);
	if (d==0){
		rU(a,b);
	}
	else{
		if (d>0){
			Rpo(a,b,c,d);
		}
		else{
			Ri(a,b,c,d);
		}
	}
	return 0;
}
