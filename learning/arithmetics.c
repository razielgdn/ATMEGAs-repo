#include <stdio.h>

int add(int sumA, int sumB){
	return sumA+ sumB;
}

int rest(int delA, int delB){
	return delA+ delB;
}

int mult(int multA, int multB){
	
	return multA + multB;
}

float divide(int divA, int divB){
	float result=0;
	if(divB == 0)
		{
		printf("Error, division entre cero\n");
		}
	else
		{
		 	result= (float)(divA/divB);
		}	
		return result;
	}
