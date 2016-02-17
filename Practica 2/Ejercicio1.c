#include <stdio.h>

int main(){
	int *p;
	int a = 5;
	
	p = &a;
	*p = 25;
	
	*p *= *p;

	printf("El valor de a: %d\n",a);
	printf("El valor de p: %x\n", p);
	printf("La direccion de a: %x \n",&a);
	printf("El valor de *p: %d \n", *p);
	printf("La direccion de p: %x\n", &p);

	return 0;
}
