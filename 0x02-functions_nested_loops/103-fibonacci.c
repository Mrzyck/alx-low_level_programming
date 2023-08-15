#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long num1 = 0, num2 = 1, sum;
	float total_sum;

		while (1)
		{
			sum = num1 + num2;

			if (sum > 4000000)
				break;
			if ((sum % 2) == 0)
				total_sum += sum;

			num1 = num2;
			num2 = sum;
		}
		printf("%.0f\n", total_sum);

		return (0);
}
