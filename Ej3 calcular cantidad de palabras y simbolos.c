#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
const int MAX=100;

//declaracion de las funciones//

int LongitudCadena(char *A);
int CantidaddeSimbolos(char *A);
int CantidaddeDigitos(char *A);
int CantidaddePalabras(char *A);
int CantidaddePalabrasconEspacios(char *A);
int RevisarEspacios(char *A);

int main(int argc, char *argv[]) {
	
	char cadena0[MAX];
	char *pcad0;
	int c,j=0;
	int simbolos=0;
	pcad0=&cadena0[0];
	printf("\nIngrese la oracion a evaluar: ");
	gets(cadena0);
	c=LongitudCadena(pcad0);
	printf("El largo de la cadena es: %d\n",c);
	c=CantidaddeSimbolos(pcad0);
	printf("La cantidad de simbolos de la cadena es: %d\n",c);
	c=CantidaddeDigitos(pcad0);
	printf("La cantidad de digitos de la cadena es: %d\n",c);
	c=CantidaddePalabrasconEspacios(pcad0);
	printf("La cantidad de palabras de la cadena es: %d\n",c);


	return 0;
}
int LongitudCadena(char *A){
	int contador=0;
	int simbolos=0;
	while(*A!='\0')
	{	
		contador++;
		A++;
	}
	return(contador);
}
int CantidaddeSimbolos(char *A){
	int simbolos=0;
	while(*A!='\0')
	{	
		if(*A==' '||*A=='['||*A=='{'||*A=='.'||*A==','||*A=='-'||*A=='*'||*A=='?'||*A==' '||*A==';'||*A=='+'||*A=='!'||*A=='$'||*A=='%'){
			
			simbolos++;
		}
		A++;
	}
	return(simbolos);
}
int CantidaddeDigitos(char *A){
	int digitos=0;
	while(*A!='\0')
	{	
		if(*A=='0'||*A=='1'||*A=='2'||*A=='3'||*A=='4'||*A=='5'||*A=='6'||*A=='7'||*A=='8'||*A=='9'){
				
				digitos++;
		}
		A++;
	}
	return(digitos);
}
int CantidaddePalabras(char *A){
	int palabras=0;
	while(*A!='\0')
	{	
		if(*A==' ' && *(A-1)!=' ' && *(A+1)!=' '){
			palabras++;
		}
		A++;
	}
	palabras++;
	return(palabras);
}
int RevisarEspacios(char *A){
	int espacios=0;
	while(*A!='\0')
	{	
		if(*A==' ' && *(A+1)==' '){
			espacios++;
		}
		A++;
	}

	return(espacios);
}
int CantidaddePalabrasconEspacios(char *A)
{
	int palabras=0;
	int i;
	int j;
	while(*A!='\0')
	{	 
		i=isalpha(*(A-1));
		j=isalpha(*(A+1));
		if(*A==' ' && *(A+1)!=' '&& *(A+-1)!=' '){
			palabras++;
		}
		A++;
	}
	palabras++;
	return(palabras);
}
