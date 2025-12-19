#include "s_s_shell.h"

int main(void)
{
    char *line;
    char **av;

    while (1)
    {
        printf("MySuperSimpleShell$ ");

        line = read_line();
        if (!line)
            break;

        av = command_line_to_av(line);
        if (!av)
        {
            free(line);
            continue;
        }

        execute(av);

        free_av(av);
        free(line);
    }

    return (0);
}
