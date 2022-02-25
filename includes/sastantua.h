#ifndef	SASTANTUA_H
#	define SASTANTUA_H

#	include <stdio.h>
#	include "cc_putchar.h"

void	add_star(int len);
void	add_space(int len);
void	eval(int *length, int stack);
void	door(int len, int layer, int size);
void	add(int len, int stack, int size);
void	create(int size, int last_l);
int	find_last_length(int size);
void	sastantua(int size);

#endif
