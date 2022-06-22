#include "main.h"

/**
* isPrime - checks if a number is prime
* @n: number
* @i: iterator
*
* Return: (1) - True or (0) - False
*/

int isPrime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}

	return (isPrime(n, i + 1));
}


/**
* is_prime_number - checks if number is prime number
* @n: number to check
*
* Return: (1) or (0)
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (isPrime(n, 2));
}
