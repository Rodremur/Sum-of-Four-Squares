/*-------------------------------------------------------
 * Proyecto de Programación Avanzada: 12031 Summation of Four Squares
 * Ratio: 36.36%	Volume: 120
 * Fecha: 18/10/2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */
#include <stdio.h>
#include <math.h>
#include "foursquares.h"

void fourSquareArray(int *n, int *n2, double *aux, int *squares)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		if (*n2 == 0) 
			squares[i] = 0;
		else 
		{
			*aux = (int)sqrt((double)*n2);
			squares[i] = *aux;
			*n2 -= (*aux)*(*aux);
		}
	}
	return;
}

void printFourSquareA(int *squares)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%d ", squares[i]);
	}
	printf("\n");
	return;
}

int sumFourSquareA(int *squares)
{
	int i, sum;
	sum = 0;
	for (i = 0; i < 4; i++)
	{
		sum += (squares[i])*(squares[i]);
	}
	return sum;
}