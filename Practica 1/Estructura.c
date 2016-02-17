#include "stdio.h"

int main(){

	struct Alumno{
		int noCuenta;
		char nombre[20];
		double promedio;

		/*void saluda(){
			printf("Hola soy %s\n",nombre);
		};*/
	};

	struct Alumno alumno;

	printf("Ingresa tu numero de cuenta: ");
	scanf("%d", &alumno.noCuenta);

	printf("Ingresa tu nombre: ");
	scanf("%s", alumno.nombre);

	printf("Ingresa tu promedio: ");
	scanf("%lf", &alumno.promedio);


	printf("Numero de cuenta: %d\nNombre: %s \nProemdio: %.2lf\n",alumno.noCuenta,alumno.nombre,alumno.promedio );
	//alumno.saluda();

	return 0;
}