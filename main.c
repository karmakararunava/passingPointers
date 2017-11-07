#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fun_stringTest ();
int fun_stringTest1 ();
int fun_numTest ();
//int sum ();

int main () {
	//printf ("Sum = %d\n", *c);
	fun_stringTest ();
	fun_stringTest1 ();
	fun_numTest ();
	return EXIT_SUCCESS;
}


/**/
int fun_stringTest () {
	char *buffer = "Hello, World!!!"; 
	char *testBuffer = malloc (sizeof (buffer));
	testBuffer = buffer;

	// output to console
	printf ("1. %s\n", buffer); // correct
	
	//printf ("2. %s\n", *buffer); // incorrect!! - segmentation fault (core dumped)
	
	//printf ("3. %c\n", buffer); // incorrect - output:- (?)
	
	//printf ("4. %c\n", *buffer); // incorrect - output:- H
	
	printf ("5. %s\n", testBuffer); // correct
	
	//printf ("6. %s\n", *testBuffer); // incorrect!! - segmentation fault (core dumped)
	
	//printf ("7. %c\n", testBuffer); // incorrect - output:- (?)
	
	//printf ("8. %c\n", *testBuffer); // incorrect - output:- H
	
	//free (testBuffer);
	return 0; 
}
/**/


/**/
int fun_stringTest1 () {
	char message[] = "Arunava here...";
	char *buffer = malloc(sizeof (message));
	buffer = message;
	printf ("%s\n", buffer);
	return 0;
}
/**/


/**/
int fun_numTest () {
	int num = 007;
	int *numPointer;
	numPointer = &num;
	printf ("%.3u\n", *numPointer);
	return 0;
}
/**/


/*
int sum () {
	int *a, *b;
	*a = 13;
	*b = 8;
	*c = *a + *b;
	return 0;
}
*/
