#include <stdio.h>
#include <stdlib.h>
const int MAX=50;

//declaracion de las funciones//

int LongitudCadena(char *A);

int main(int argc, char *argv[]) {
	
	char cadena0[MAX];
	char *pcad0;
	int c;
	pcad0=&cadena0[0];
	printf("\nIngrese la cadena a contar su largo: ");
	gets(cadena0);
	c=LongitudCadena(pcad0);
	printf("El largo de la cadena es: %d",c);
	
	return 0;
}
int LongitudCadena(char *A){
	int contador=0;
	while(*A!='\0')
	{
		contador++;
		A++;
	}
	return(contador);
}
