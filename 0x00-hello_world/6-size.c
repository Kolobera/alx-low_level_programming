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
       	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longiType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llongiType));
	printf("Size of a float: %zu byte(s)\n",sizeof(floatType);
	return (0);
	}
