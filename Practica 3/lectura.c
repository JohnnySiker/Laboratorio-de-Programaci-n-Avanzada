#include <stdio.h>

int main(){
	FILE *f;
	char c;

	f = fopen("algo","r");
	
	c = fgetc(f);

	while( c != EOF ){
		printf("%c",c);
		c = fgetc(f);
	}
}
