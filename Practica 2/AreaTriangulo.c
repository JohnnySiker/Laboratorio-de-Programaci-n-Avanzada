#include <stdio.h>
#include <stdlib.h>


int main(){
	int *p;
	
	p = malloc(2*sizeof(int));
	printf("Dame la base: ");
	scanf("%d",p);
	printf("Dame la altura:");
	scanf("%d",p+1);
	
	printf("\nArea=(%d*%d)/2 = %d",*p,*(p+1),(*p**(p+1)/2));
	

}

