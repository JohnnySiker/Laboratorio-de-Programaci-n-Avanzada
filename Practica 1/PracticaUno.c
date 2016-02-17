#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void printMatriz(int matriz[3][3]){
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
}

void printDiagonalMatriz(int matriz[3][3]){
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			if (i == j){
				printf("%d ",matriz[i][j]);
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
}

int main(){
	
	int matrixA [3][3];
	int matrixB [3][3];
	int matrizResultado[3][3];

	srand(time(NULL));

	printf("Bienvenido inserta valores a la siguiente matriz de 3x3\n");

	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			printf("Posicion [%d][%d]:",i,j);
			scanf("%d",&matrixA[i][j]);	
			matrixB[i][j] = rand()%6+2;
			matrizResultado[i][j] = matrixB[i][j] + matrixA[i][j];
		}
	}

	printf("\nMatriz Aleatoria:\n");
	printMatriz(matrixB);
	printf("\nMatriz Resultado:\n");
	printMatriz(matrizResultado);
	printf("\nDiagonal:\n");
	printDiagonalMatriz(matrizResultado);

	return 0;
}




