#include <stdio.h>
#include <stdlib.h>
//usamos la función llamda raiz
double raiz(double num, double toleran, double result){
	//declaramos nuestras variables
	double div,dif;
	//algoritmo
	div=num/result;
	dif=result-div;
	dif= dif>0? dif:-dif;
	if(diferencia<=toleran){
		return result;
	}
// si no
	else{
		//nuevo candidato
		result= (result+div)/2;
		return raiz(num, toleran, result);
	}

}
int main(int argc, char *argu[]){
	//declaramos las tres variables
	double num, toleran, result;
	num=atof(argu[1]); toleran=atof(argu[2]); result=atof(argu[3]);
	result=raiz(num, toleran, result);
	printf("%lf\n", result );
	
}