#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[]) {
	int distance = 100;
	float conv = 1.609344;
	int ecirc = 40075;

	// this is also a comment
	printf("You are %d miles away.\n", distance);
	printf("That is %.2f kilometers in metric.\n", distance*conv);
	printf("%.2f is %.2f percent of the earth's circumference.\n", distance*conv, (distance*conv*100)/ecirc); 
	printf("The earth has an approximate circumference of %d kilometers.\n", ecirc);
	printf("Hello, world.\n");
	printf("Hola, mundo.\n");

	return 0;
}


