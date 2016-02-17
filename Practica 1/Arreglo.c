#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int numero[10];
	int suma = 0;

	srand(time(NULL)); 
	for(int i = 0; i < 10;i++){
		numero[i] = rand()%10;
		printf("numero[%d]: %d\n", i,numero[i]);
		suma += numero[i];
		printf("numero[%x]: %x\n", &i, &numero[i]);
	}

	printf("La suma es: %d\n",suma );
	printf("La suma es: %x\n",&suma );
	printf("La suma es: %d\n",numero[-2]);

	return 0;
}