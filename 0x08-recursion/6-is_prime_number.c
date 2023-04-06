#include "main.h"

/**
 *_check_prime - a function that checks if a number is a prime or not
 *@n: the number input
 *@i: the devisor we are checking
 *Return: returns 1 if found 0 if not
 */

int _check_prime(int n, int i)
{

	if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (_check_prime(n, i + 1));
}

/**
 *is_prime_number - a function that enform if the input is a prime or no
 *@n: the input number
 *Return:  returns 1 if it is a prime and 0 if not
 */

int is_prime_number(int n)
{

	if (n == 2)
		return (1);
	else if (n <= 1 || n % 2 == 0)
		return (0);
	else
		return (_check_prime(n, 3));
}
