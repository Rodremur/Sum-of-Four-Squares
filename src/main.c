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

int main() {
	int t, n, n2, i, sum;
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%d", &n);
		n2 = n;
		int squares[4];
		double aux;
		fourSquareArray(&n, &n2, &aux, squares);
		sum = sumFourSquareA(squares);
		if (sum == n) printFourSquareA(squares);
		else printf("Impossible\n");
	}
	return 0;
}
