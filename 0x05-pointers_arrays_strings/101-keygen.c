#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Print program that generates random valid passwords.
 *
 * Return: 0 is success
 */

int main(void)
{
	int n;
	int sum = 2772;

	srand(time(0));
	while (sum)
	{
		n = rand() % 100;
		if (n <= 94)
			n += 32;
		else
			continue;
		if (sum - n == 0)
		{
			sum -= n;
			printf("%c", n);
		}
		else if (sum - n - 32 > 0)
		{
			sum -= n;
			printf("%c", n);
		}
	}

	return (0);
}
