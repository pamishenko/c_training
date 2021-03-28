#include <stdio.h>

int	main(void)
{
	unsigned int sum;
	unsigned int number;

	sum = 0;
	for(number = 2; number <= 100; number += 2)
		sum += number;
	printf("Sum is %d\n", sum);
	return (0);
}
