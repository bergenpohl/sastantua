#include "main.h"

int     main(int argc, char *argv[])
{
    int i;
    int len;
    
    i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            len = atoi(argv[i]);
            sastantua(len);
            i++;
        }
    }
    return(0);
}
