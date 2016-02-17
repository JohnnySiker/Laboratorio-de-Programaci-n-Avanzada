#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void sayHello();

int main(){
	
	int M [4][4];
	srand(time(NULL));

	for (int i = 0; i < 4; ++i){
		printf("⎮");
		for (int j = 0; j < 4; ++j){
			M[i][j] = rand()%10;
			printf("%d ",M[i][j]);
		}
		printf("⎮");
		printf("\n");
	}
	

	/*sayHello();
	printf("%x\n",&sayHello );
	*/
	return 0;
}

/*void sayHello(){
	printf("Hola\n");
}*/
