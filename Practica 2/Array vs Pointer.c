#include <stdio.h>

int main (){
	int a[5] = {1,2,3,4,5};
	int *p;
	int i;

	p = a;
	/*El arreglo siempre apunta a la misma direccion y el apuntador pueda cambiar a donde apunta*/
	for(i = 0 ; i<5 ;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}

	for(i = 0; i<5 ; i++){
		printf("p+%d: %d\n",i,*(p+i));
	}

	for(i=0;i<5;i++)
		printf("a+%d: %d\n",i,*(a+i));


	for(i=0; i<5; i++)
		printf("p[%d]: %d \n",i,p[i]);
}
