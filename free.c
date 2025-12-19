#include "s_s_shell.h"

void free_av(char **av)
{
    int i = 0;

    if (!av)
        return;

    while (av[i])
    {
        free(av[i]);
        i++;
    }
    free(av);
}
