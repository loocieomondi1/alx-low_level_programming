#include <unistd.h>
/**
 * _putchar - writes a char to the stdout file no
 * @c: character
 * return: ....
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
