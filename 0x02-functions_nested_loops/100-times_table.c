 #include "main.h"
/**
*print_times_table - prints n times table
*@n: input
*/

void print_times_table(int n)
{
	int i, j, k;

	if (n <= 15 && n >= 0)
	{
		for (k = 0; k <= n; k++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				i = j * k;

				if (i <= 9)
					_putchar(' ');
				if (i <= 99)
					_putchar(' ');
				if (i >= 100)
				{
					_putchar((i / 100) + 48);
					_putchar((i / 10) % 10 + 48);
				} else if (i <= 99 && i >= 10)
					_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
