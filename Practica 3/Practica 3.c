#include <stdio.h>

void readFile(FILE *archivo){
	char c;

	if (archivo != NULL){	
		c = fgetc(archivo);
		while( c != EOF ){
			printf("%c",c);
			c = fgetc(archivo);
		}
	}else{
		printf("El archivo no existe, se creara!\n");
	}
	fclose(archivo);
}

void writeFile(FILE *archivo){
	int bandera = 0;
	char c,aux;

	if( archivo != NULL){
		while(bandera == 0){
			c = getchar();
			bandera = ((aux == '\n' && c == '\n') ? 1:0);
			fputc(c,archivo);	
			aux = c;
		}
	}else{
		printf("Error: No se puede editar/crear el archivo\n");
	}
	fclose(archivo);
}


int main(){

	
	char aux;
	char nombreArchivo[40];	
	

	printf("Nombre de la nota: ");
	gets(nombreArchivo);

	readFile(fopen(nombreArchivo,"r"));
	writeFile(fopen(nombreArchivo,"a"));
	
	return 0;
}

