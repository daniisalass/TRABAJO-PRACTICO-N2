#include <stdio.h>
#include <stdlib.h>
const int MAX=50;
int LongitudCadena(char *A);
void IngresarPalabras(char Matriz[][MAX],int cantidad);
int MayorLongitud(int *A,int );
int MenorLongitud(int *A,int );
int VerCaracteres(char *A);
int main(int argc, char *argv[]) {
	
	char Matriz [MAX][MAX];
	int n,i,c;
	int Largo[MAX];
	int CantidadDeSimbolos[MAX];
	char *pcarc;
	int *L;
	int *S;
	printf("Ingrese la cantidad de cadenas a ingresar: ");
	scanf("%i",&n);
	L=&Largo[0];
	S=&CantidadDeSimbolos[0];
	pcarc=&Matriz[0][0];
	IngresarPalabras(Matriz,n);
	printf("\n-------------------------------\n\n");
	for(i=0;i<n;i++){
		*(L+i)=LongitudCadena(Matriz[i]);
	}
	for(i=0;i<n;i++){
		printf("La Longitud de la cadena %d es: %d\n",i+1,LongitudCadena(Matriz[i]));
	}
	printf("\n-------------------------------\n\n");
	printf("La palabra mas larga es la °N: %d \n",MayorLongitud(L,n));
	printf("La palabra mas larga es la °N: %d \n",MenorLongitud(L,n));
	
	printf("\n-------------------------------\n\n");
	for(i=0;i<n;i++){
		*(S+i)=VerCaracteres(Matriz[i]);
	}
	printf("La palabra con mas caracteres especiales es la °N: %d \n",MayorLongitud(S,n));
	printf("La palabra con menos caracteres especiales es la °N: %d \n",MenorLongitud(S,n));
	
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
void IngresarPalabras(char Matriz[][MAX],int cantidad){
	
	int i;
	for(i=0;i<cantidad;i++){
		printf("Ingrese la cadena %d: ",i+1);
		fflush(stdin);
		gets(Matriz[i]);
	}
	
}
int MayorLongitud(int *A, int n){
	int i,posicion=0;
	int mayor=0;
	for (i=0;i<n;i++){
		if (*(A+i)>mayor){
			
			mayor=*(A+i);
			posicion=i;
		}
	}
	return(posicion+1);
}
int MenorLongitud(int *A,int n ){
	int i,posicion=0;
	int menor=MAX;
	for (i=0;i<n;i++){
		if (*(A+i)<menor){
			
			menor=*(A+i);
			posicion=i;
		}
	}
	return(posicion+1);
}
int VerCaracteres(char *A){
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
