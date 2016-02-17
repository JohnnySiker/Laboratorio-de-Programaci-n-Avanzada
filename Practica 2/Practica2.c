#include <stdio.h>
#include <stdlib.h>

int main(){
	double *valores;
	int cantidad;

	printf("Ingresa la cantidad de numeros a promediar: ");
	scanf("%d",&cantidad);
	valores = malloc((cantidad+1)*sizeof(double));

	for(int i = 0; i < cantidad;i++){
		printf("Ingresa el valor %d: ", i+1);
		scanf("%lf",valores+i);
		*(valores +cantidad + 1 ) += *(valores+i);
	}

	printf("El promedio es: %.2lf\n", *(valores +cantidad + 1 )/cantidad);



	return 0;
}