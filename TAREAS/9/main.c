#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int arc, char *argu[]){
	int nuD;
	//nuD es el número de digitos
	nuD=strlen(argu[1]);
	//es un nueva lista ara guardar el numero
	char arguc[nuD];
	int result=0;
	int dig[nuD];
	for(int i=0;i<nuD;i++){
		//se suman los caracteres con respecto al número de digitos
		arguc[i]=argu[1][i];
		dig[i]=atoi(&arguc[i]);
		//SE guarda en una lista de enteros
		result=result+dig[i];
		//SE suma cada digito separado
	}
	printf("%i\n",result);
	return 0;
}