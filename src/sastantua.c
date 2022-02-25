#include "sastantua.h"

void    sastantua(int size)
{
    create(size, find_last_length(size));
}

void    add_star(int len)
{
    int i;

    i = 0;
    while (i < len)
    {
        cc_putchar('*');
        i++;
    }
}

void    add_space(int len)
{
    int i;
    
    i = 0;
    while (i < len)
    {
        cc_putchar(' ');
        i++;
    }
}

void    eval(int *length, int stack)
{
    if (stack == 0)
        *length += 1;
    else if (stack < 3)
        *length += 4;
    else if (stack > 2)
        *length += ((2 + ((stack + 1) / 2)) * 2) - 2;
}

void    door(int len, int layer, int size)
{
    int frame;
    int door_size;
    int d_size;
    
    door_size = size;
    if (door_size % 2 == 0)
        door_size--;
    d_size = door_size;
    
    if (layer > (door_size - size - 1) * -1)
    {
        frame = (len - door_size) / 2;
        add_star(frame);
        while (--door_size > -1)
            if (size > 4 && door_size == 1 && layer == ((d_size - size - 1) * -1) + (d_size / 2) + 1)
            {
                cc_putchar('$');
            }
            else
            {
                cc_putchar('|');
            }
        add_star(frame);
    }
    else
        add_star(len);
}

void    add(int len, int stack, int size)
{
    if (stack == (size - 1))
    {
        door(len, stack, size);
    }
    else
    {
        add_star(len);
    }
}

void    create(int size, int last_l)
{
    int layers;
    int stack;
    int length;
    int layer;
    
    stack = 0;
    length = 0;
    while (stack < size)
    {
        layers = stack + 3;
        layer = 0;
        eval(&length, stack);
        while (layer < layers)
        {
            add_space(((last_l - length) / 2) - 1);
            cc_putchar('/');
            add(length, stack, size);
            cc_putchar('\\');
            cc_putchar('\n');
            length += 2;
            layer++;
        }
        stack++;
    }
}

int    find_last_length(int size)
{
    int layers;
    int stack;
    int length;
    
    stack = 0;
    length = 0;
    while (stack < size)
    {
        layers = stack + 3;
        if (stack == 0)
            length += 3;
        else if (stack < 3)
            length += 6;
        else if (stack > 2)
            length += (2 + ((stack + 1) / 2)) * 2;
        while (layers > 1)
        {
            length += 2;
            layers--;
        }
        stack++;
    }
    return (length);
}
