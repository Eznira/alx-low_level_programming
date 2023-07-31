#include <stdio.h>
int main(void)
{
	int my_int = 1;
	char a = '0';

	printf("the result is a %zu\n", TYPE_NAME(my_int + a));

	return (0);
}
