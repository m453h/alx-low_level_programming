/**
 * get_endianness - check endianness
 *
 * Description: this function checks the order in which a
 * sequence of bytes is stored in computer memory which can
 * either be Big Endian or Little Endian.
 *
 * Return: 1 if Big Endian or 0 if Little Endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
