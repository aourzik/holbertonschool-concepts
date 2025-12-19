#include "s_s_shell.h"

void execute(char **av)
{
    pid_t pid;

    pid = fork();
    if (pid == -1)
    {
        perror("fork");
        return;
    }

    if (pid == 0)
    {
        execve(av[0], av, NULL);
        perror("execve");
        exit(1);
    }
    else
    {
        wait(NULL);
    }
}
