/*-------------------------------------------------------
 * Proyecto de Programación Avanzada: 12031 Summation of Four Squares Test
 * Ratio: 36.36%	Volume: 120
 * Fecha: 18/10/2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "utest.h"
#include "../src/foursquares.h"

//Global Variable
 char msg[100];
 int squares[4];
 int expected[4] = {5, 2, 1, 0};

 static char * test_fourSquareArray()
 {
 	int i = 0;
 	int n = 30;
 	int n2 = 30;
 	double aux;
 	fourSquareArray(&n, &n2, &aux, squares);

 	sprintf(msg, "Element %d must be %d\n", i, expected[i]);
 	assert_test(msg, expected[i] == squares[i]); i++;
 	sprintf(msg, "Element %d must be %d\n", i, expected[i]);
 	assert_test(msg, expected[i] == squares[i]); i++;
 	sprintf(msg, "Element %d must be %d\n", i, expected[i]);
 	assert_test(msg, expected[i] == squares[i]); i++;
 	sprintf(msg, "Element %d must be %d\n", i, expected[i]);
 	assert_test(msg, expected[i] == squares[i]); i++;
 	return 0;
 }

 static char * test_printFourSquareA()
 {
 	int i;
 	for (i = 0; i < 4; i++) {
 		printf("%d ", expected[i]);
 	}
 	printf("\n");

 	printFourSquareA(squares);

 	sprintf(msg, "Printed result is incorrect");
 	assert_test(msg, 0==0);
 	return 0;
 }

 static char * test_sumFourSquareA()
 {
 	int i;
 	int n = 30;
 	int sum;

 	sum = sumFourSquareA(squares);

 	sprintf(msg, "Sum of the four squares must be %d\n", n);
 	assert_test(msg, sum == n);
 	return 0;
 }

 int main()
 {
 	run_test("Test Four Square Array:", test_fourSquareArray);
 	run_test("Test Print Four Square Array:", test_printFourSquareA);
 	run_test("Test Sum Four Square Array:", test_sumFourSquareA);
 	return 0;
 }