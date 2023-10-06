#include <stdio.h>
#include <stdlib.h>
const int MAX=100;
//declaracion de las funciones//

void OrdenarPalabra(char *A, int m);
int LongitudCadena(char *A);

int main(int argc, char *argv[]) {
	char cadena0[MAX];
	char *pcad0;
	int c;
	pcad0=&cadena0[0];
	printf("\nIngrese la oracion a evaluar: ");
	gets(cadena0);
	c=LongitudCadena(pcad0);
	OrdenarPalabra(pcad0,c);
	puts(cadena0);
	return 0;
}
void OrdenarPalabra(char *A,int m)
{	
		int i,j;
		int cont=1;
		char *paux;
		int aux;
		paux=A;
		paux++;
		for(j=0;j<m-1;j++)
		{
			for(i=0;i<m-cont;i++)
			{
				if(*A < *paux)
				{
					aux=*paux;
					*paux=*A;
					*A=aux;
					puts("entro");
				}
				paux++;
			}
			cont++;
			A++;
			paux=A;
			paux++;
		}
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

