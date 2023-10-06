#include <stdio.h>
#include <stdlib.h>
const int MAX=100;

//declaracion de las funciones//

int LongitudCadena(char *A);

int main(int argc, char *argv[]) {
	
	char cadena0[MAX];
	char *pcad0;
	int c;
	int simbolos=0;
	pcad0=&cadena0[0];
	printf("\nIngrese la oracion a evaluar: ");
	gets(cadena0);
	c=LongitudCadena(pcad0);
	printf("El largo de la cadena es: %d",c);
	
	return 0;
}
int LongitudCadena(char *A){
	int contador=0;
	int simbolos=0;
	while(*A!='\0')
	{	
		if(*A!='#'||*A!='['||*A!='{'||*A!='.'||*A!=','||*A!='-'||*A!='*'||*A!='?'||*A!=' '||*A!=';'||*A!='+'||*A!='!'||*A!='$'||*A!='%'){
			
			simbolos++;
		}
		contador++;
		A++;
	}
	printf("Cantidad de simbolos: %d \n",simbolos);
	return(contador);
}
