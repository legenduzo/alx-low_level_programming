/* This function checks the ascii value of a character */

/**
 * _isalpha - checks for alphabet equals
 * @c: character to be accessed
 *
 * Return: 1 if alphabet, 0 if not
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}

	return (0);
}
