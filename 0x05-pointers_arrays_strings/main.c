#include <stdio.h>
#include "main.h"

int main(void)
{
	int num = 1;
	int *n = &num;
      	reset_to_98(n);
	printf("Value of num is: %d\n",num);
	return (0);
}
