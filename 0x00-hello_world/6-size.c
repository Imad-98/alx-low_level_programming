#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	prinft("size of a char: %d byte(s)\n", sizeof(char));
	prinft("size of an int: %d byte(s)\n", sizeof(int));
	prinft("size of a long int: %d byte(s)\n", sizeof(long int));
	prinft("size of a long long int: %d byte(s)\n", sizeof(long long int));
	prinft("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
