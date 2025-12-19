#include <stdio.h>
#include <unistd.h>

int ppid()
{
    printf("Mon PPID est %d\n", getppid());
    return (0);
}
