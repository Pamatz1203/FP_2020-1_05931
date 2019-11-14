#include <stdio.h>
#include <stdlib.h>
//Una función que trabaje todo el problema
int hola(int people){
	//hi seran los saludos que de una persona
	int final, hi;
	//El numero de saludos sera el de las personas menos uno, no nos saludamos a nosotros mismos
	hi= people-1;
	if(hi==0){
		return hi;
	}
	final=hi+hola(people-1);
	return final;
}
//función para tomar los argumentos
int main(int argc, char*argu[]){
	int result, people;
	people=atoi(argu[1]);
	result=hola(people);
	printf("%i\n", result);
	return 0;

}