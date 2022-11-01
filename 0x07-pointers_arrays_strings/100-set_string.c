#include "main.h"

/**
 *set_string - Function that sets the value of a pointer to a char
 *@s: 1st paramater passed
 *@to: 2nd parameter passed
 */

void set_string(char **s, char *to)
{

	*s = *(&to);
}
