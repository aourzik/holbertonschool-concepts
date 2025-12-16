#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Mon PPID est %d\n", getppid());
    return (0);
}
