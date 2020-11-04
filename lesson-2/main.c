/*******************************************************************************************************
 * File		: main.c
 * Author	: Anushka Perera
 * Date		: 04 Nov. 2020
 *******************************************************************************************************/

/*******************************************************************************************************
 * PREPROCESSOR COMMANDS
 *******************************************************************************************************/

#include <stdio.h> // input/output library

/********************************************************************************************************
 * MAIN FUNCTION
 *******************************************************************************************************/

int main()
{
	// print sizes of some basic data types
	printf("size of char          : %ld\n", sizeof(char));
	printf("size of short int     : %ld\n", sizeof(short));
	printf("size of int           : %ld\n", sizeof(int));
	printf("size of long int      : %ld\n", sizeof(long));
	printf("size of long long int : %ld\n", sizeof(long long));
	printf("size of float         : %ld\n", sizeof(float));
	printf("size of double        : %ld\n", sizeof(double));
	printf("size of long double   : %ld\n", sizeof(long double));

	// variable declarations 
	char c = 'a'; // define c and initilize
	short int i, j, k; // define i, j and k without initialization
	long int long_int = 0x12345678;
	float f;
	double df;

	// assign values to previously declared variables
	f = 12.345e+2;
	df = 100.001e23;
	return 0;
}
