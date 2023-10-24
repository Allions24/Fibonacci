#include <stdio.h>

int fibonacci(int num) 
{    
	if (num <= 1) 
	{         
	return num;     
	}     
return fibonacci(num - 1) + fibonacci(num - 2); 
} 

int main() 
{     
int Elementos;     
printf("NUmero de elementos de la serie de Fibonacci: \n");    
scanf("%d", &Elementos);     
	if (Elementos <= 0) 
	{         
	printf("El número de elementos debe ser mayor a 0 \n");         
	return 1;    
 	}     
int serieFibonacci[Elementos];     
for (int i = 0; i < Elementos; i++) 
	{         
	serieFibonacci[i] = fibonacci(i);     
	}    
printf("Serie de Fibonacci con %d elementos:\n ", Elementos);     
for (int i = 0; i < Elementos; i++) 
	{                 
	printf("%d\n ", serieFibonacci[i]);     
	}        
return 0; 
}
