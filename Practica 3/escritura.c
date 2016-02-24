#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	char c;
	char nombredelarchivo[40];


	printf("Nombre del archivo: ");
	gets(nombredelarchivo);

	f = fopen(nombredelarchivo,"a");
	
	while(c!='\n'){
		c = getchar();
		fputc(c,f);
	
	}

	fclose(f);
}
