#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - function entry point
*
*description: a program that generates random valid
*passwords for the program 101-crackme.
*
* Return: Always 0
*/

int main(void)
{
    int pass[100];   /* Array to store the generated password digits */
    int i, sum, n;   /* Loop index, sum of ASCII values, and remaining value */

    sum = 0;         /* Initialize sum of ASCII values */

    srand(time(NULL)); /* Seed the random number generator */

    for (i = 0; i < 100; i++)
    {
        pass[i] = rand() % 78;    /* Generate random values between 0 and 77 */
        sum += (pass[i] + '0');   /* Increment sum by ASCII value of the generated number */
        putchar(pass[i] + '0');   /* Print the generated digit as a character */

        /* Check if adding remaining value doesn't exceed 78 */
        if ((2772 - sum) - '0' < 78)
        {
            n = 2772 - sum - '0'; /* Calculate the remaining value */
            sum += n;             /* Update the sum */
            putchar(n + '0');     /* Print the remaining digit as a character */
            break;                /* Exit the loop */
        }
    }

    putchar('\n');  /* Print a newline character to separate the output */

    return (0);     /* Return 0 to indicate successful execution */
}
