#include <stdio.h>

/**
 *main - Entry poiny
 *
 *Return: 0
 */
int main(void)
{
	int intType;
    	float floatType;
       	long int longiType;
	long long int llongiType;	
       	char charType;
       	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longiType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(llongiType));
	printf("Size of a float: %d byte(s)\n",sizeof(floatType);
	return (0);
	}
