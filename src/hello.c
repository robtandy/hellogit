#include <stdio.h>

int main (int argc, char **argv) {

	/* This is a test git app */

	char in[50];
	printf ("Why, Hello there, Git!");
	printf("\n");
	printf("Enter Your Name: ");
	scanf("%s", in);
	printf("Hello, %s!\n", in);
	return (0);

}
