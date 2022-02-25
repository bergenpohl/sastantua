#include "cc_putchar.h"

void    cc_putchar(char c)
{
    write(1, &c, 1);
}
