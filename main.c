#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//extern int *c;

//int *fun_stringTest ();
int fun_stringTest1 ();
//int fun_numTest ();
//int sum ();

int main () {
	//printf ("Sum = %d\n", *c);
	//fun_stringTest ();
	//fun_numTest ();
	fun_stringTest1 ();
	//printf ("%c\n", fun_stringTest());
	return EXIT_SUCCESS;
}

/*
int sum () {
	int *a, *b;
	*a = 13;
	*b = 8;
	*c = *a + *b;
	return 0;
}
*/

/*
int fun_numTest () {
	int num = 31;
	int *numPointer;
	numPointer = &num;
	printf ("%u\n", *numPointer);
	//printf ("%c", *passBuffer);
	return 0;
}
*/

/**/
int fun_stringTest1 () {
	char message[] = "Hello, World!!!";
	char *buffer;
	buffer = &messsage;
	printf ("%c", *buffer);
	return 0;
}
/**/

/*
int *fun_stringTest () {
	char *buffer;
	buffer = "Hello, World!!!";
	//char *passBuffer;
	//passBuffer = &buffer;
	//memcpy (*passBuffer, *buffer, 15);
	printf ("%c\n", *buffer);
	//printf ("%c", *passBuffer);
	return (buffer);
}
*/
