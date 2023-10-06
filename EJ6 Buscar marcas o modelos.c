#include <stdio.h>
#include <stdlib.h>
const int MAX=50;

//declaracion de funciones//

int LongitudCadena(char *A);
int BuscarMarca(char *A, char *B, int);
int BuscarModelo(char *A, char *B, int);
int BuscarSerie(char *A, char *B, int j);
//programa principla//

int main(int argc, char *argv[]) 
{
	char Matriz[][150]={"-samsung-s23-44231-","-motorola-g stylus-08977-","-samsung-s20-s8493874-","-samsung-s22-s8493875-","-motorola-g20plus-08977-","-motorola-g30-08977-","-motorola-g20-08977-"};
	
	int i,c;
	int selecionador;
	int salir=0;
	
	char buscador[MAX];
	char *pcarc;
	pcarc=&buscador[0];
	
	
	int largo[MAX];
	int *l;
	l=&largo[0];
	
	
	while(salir==0)
	{
	int error=0;
	for(i=0;i<7;i++)
	{
		*(l+i)=LongitudCadena(Matriz[i]);
	}
	puts("El stock es:");
	printf("===============================================\n");
	for(i=0;i<7;i++)
	{
		
		printf("=======    %s    \n",Matriz[i]);
		
	}
	printf("===============================================\n");
	puts("Ingrese lo que desea hacer:\n 1-Buscar por Marca \n 2-Buscar por Modelo \n 3- Buscar por N° de Serie \n 4-Salir");
	scanf("%d",&selecionador);
	switch(selecionador)
	{
		case 1: 
				fflush(stdin);
				printf("\nIngrese el Marca a buscar: ");
				gets(buscador);
				c=LongitudCadena(buscador);
				puts("Se encontro:");
				for(i=0;i<7;i++)
				{
					if((BuscarMarca(Matriz[i],pcarc,c))==1)
					{	
						error=1;
						puts(Matriz[i]);
					}
				}
				if(error==0)
				{
					puts("NO SE ENCONTRO NINGUN DATO");
				}
			break;
		case 2:
			fflush(stdin);
			printf("\nIngrese el modelo a buscar: ");
			gets(buscador);
			c=LongitudCadena(buscador);
			puts("Se encontro:");
			for(i=0;i<7;i++)
			{
				
				if((BuscarModelo(Matriz[i],pcarc,c))==1)
				{
					puts(Matriz[i]);
					error=1;
				}
			}
			if(error==0)
			{
				puts("NO SE ENCONTRO NINGUN DATO");
			}
			
			break;
		case 3:
			fflush(stdin);
			printf("\nIngrese el N° de Serie modo a buscar: ");
			gets(buscador);
			c=LongitudCadena(buscador);
			puts("Se encontro:");
			for(i=0;i<7;i++)
			{
				if((BuscarSerie(Matriz[i],pcarc,c))==1)
				{
					error=1;
					puts(Matriz[i]);
				}
			}
			if(error==0)
			{
				puts("NO SE ENCONTRO NINGUN DATO");
			}
			
			break;
		case 4:
			fflush(stdin);
			salir=1;
			break;
		default: break;
	}
	puts("\n\n");
	}
	return 0;
}

//coido de las funciones//

int LongitudCadena(char *A){
	int contador=0;
	while(*A!='\0')
	{
		contador++;
		A++;
	}
	return(contador);
}
int BuscarMarca(char *A, char *B ,int j ){
	int i;
	int Marca=0;
	A++;
	for(i=0;i<j;i++)
	{	
		if(*B==*A)
		{
		Marca=1;
		A++;
		B++;
		}
		else
		{
			Marca=0;
			break;
		}
		
		
	}
	return(Marca);
}
int BuscarModelo(char *A, char *B, int j){
	
	int i=0;
	int Modelo=0;
	int contador=0;
	do 
	{
		A++;
		while(*A!='-')
		{
			A++;
		}
		contador++;
		A++;
	}while(contador<1);
	i=0;
	for(i=0;i<j;i++)
	{	
		if(*B==*A)
		{
			Modelo=1;
			A++;
			B++;
		}
		else
		{
			Modelo=0;
			break;
		}
		
		
	}
	return(Modelo);
}
int BuscarSerie(char *A, char *B, int j){
	int i=0;
	int Serie=0;
	int contador=0;
	do 
	{
		A++;
		while(*A!='-')
		{
			i++;
			A++;
		}
		contador++;
		A++;
	}while(contador<2);
	i=0;
	for(i=0;i<j;i++)
		{	
		if(*B==*A)
		{
			Serie=1;
			A++;
			B++;
		}
		else
		{	
		Serie=0;
		break;
		}
	}
	return(Serie);
}
		
		

