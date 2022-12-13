#include "main.h"

/**
 * display_time - Displays time value (hours:minutes) using _putchar
 * @hour: hour(s) value to display
 * @minute: minute(s) value to display
 *
 * Return: (void)
 */
void display_time(int hour, int minute)
{
	int first_digit;
	int last_digit;

	first_digit = hour / 10;
	last_digit = hour % 10;

	_putchar(first_digit + '0');
	_putchar(last_digit + '0');
	_putchar(':');

	first_digit = minute / 10;
	last_digit = minute % 10;

	_putchar(first_digit + '0');
	_putchar(last_digit + '0');
}

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: (void)
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			display_time(hour, minute);
			_putchar('\n');
		}
	}
}
