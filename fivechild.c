#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
    pid_t pid;
    int i;
    char *av[] = {"ls", "-l", "/tmp", NULL};

    /*ici on dit que c'est pour 5 tours, soit 5 children*/
    for (i = 0; i < 5; i++)
    {
        pid = fork();

        if (pid == -1)
        {
            perror("fork");
            return (1);
        }
        /*enfants*/
        if (pid == 0)
        {
            execve("/bin/ls", av, NULL);
            perror("execve");
            exit(1);
        }
        else
        /*parent qui attend*/
        {
            wait(NULL);
        }
    }
    return (0);
}
