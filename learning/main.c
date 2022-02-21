/*
*This is a learning for me to use git tools
*/

#include <stdio.h>

//#include "/home/razielgdn/ATMEGAs-repo/learning/arithmetics.h"
//#include "arithmetics.c"
#include "arithmetics.h"
int main(){
	//int numA, int numB;
	printf("Hello World!!\n");
	printf("I need a lot of money\n");
	printf("intoduce primer numero\n");	
	scanf("%d", &variableA);

	printf("intoduce segundo numero\n");	
	scanf("%d", &variableB);
	
	printf ("La suma de los 2 numeros es: %d + %d = %d\n",variableA, variableB, add( variableA, variableB));
	printf("La division de los 2 numeros es: %d + %d = %f\n",variableA, variableB, divide( variableA, variableB));
	
	/*
	Agregando comentarios al proyecto
		*/
	return 0;
}


