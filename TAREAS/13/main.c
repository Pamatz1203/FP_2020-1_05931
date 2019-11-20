#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argu[]){
	//se hace la lista de enteros
	int nums[argc-1];

	int i=0, k=1,numero;
	while(i<argc-1){
		//se copia la argu a la nueva lista
		numero=atoi(argu[k]);
		nums[i]=numero;
		i++;
		k++;
	}
	int temporal;
	for (i=1;i<argc-1;i++){
		for (k=0;k<argc-1-i;k++){ 
			//se intercambian numeros 
			if(nums[k]>nums[k+1]){
				//se guarda en temporal
				temporal=nums[k];
				//retrocede el numero siguinete
				nums[k]=nums[k+1];
				//se cambia el siguiente 
				nums[k+1]=temporal;
          }
       }
	}
	//con este for se imprime
	for (int i=0;i<argc-1;i++){
		printf("%i\n",nums[i]);
	}
  return 0;
}
