#include <stdio.h>

#include <stdlib.h>

#include <time.h>



/**

 * main - determine if number is positive or negative

 *

 * Description: program will assign a random number to the variable n each time

 * it is executed.

 *

 * Return: Always 0 (Success)

 */



int main(void)

{

1-last_digit.c int n;





1-last_digit.c srand(time(0));

1-last_digit.c n = rand() - RAND_MAX / 2;

1-last_digit.c if (n == 0)

1-last_digit.c 1-last_digit.c printf("%d is zero\n", n);

1-last_digit.c else if (n < 0)

1-last_digit.c 1-last_digit.c printf("%d is negative\n", n);

1-last_digit.c else

1-last_digit.c 1-last_digit.c printf("%d is positive\n", n);



1-last_digit.c return (0);

}
