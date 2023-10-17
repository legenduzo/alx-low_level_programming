/* This function checks the ascii value of a character */

/**
 * _islower - accesses the ascii value
 * @c: character to be accessed
 *
 * Return: 0 if lowercase 1 if not
 */

int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}

	return (1);
}
