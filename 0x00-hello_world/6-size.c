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
       	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longiType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(llongiType));
	printf("Size of a float: %lu byte(s)\n",sizeof(floatType));
	return (0);
}
