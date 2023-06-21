#include "main.h"

/**
 * jack_bauer - Prints every minute of Jack Bauer's day (00:00 to 23:59)
 *
 * Description: This function prints every minute of
 *              Jack Bauer's day in the format
 *              HH:MM, starting from 00:00 to 23:59.
 *              It loops through the hours and
 *              minutes and uses the _putchar function to display the time.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');
		}
	}
}
