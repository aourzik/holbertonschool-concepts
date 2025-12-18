#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **command_line_to_av(char *line)
{
    char **av = NULL;
    char *token;
    int i;
    int words = 0;
    char *tmp;

    if (!line)
        return (NULL);

    tmp = strdup(line);
    if (!tmp)
        return (NULL);

    token = strtok(tmp, " \t\n");
    while (token)
    {
        words++;
        token = strtok(NULL, " \t\n");
    }
    free(tmp);

    if (words == 0)
        return (NULL);

    token = strtok(line, " \t\n");
    while (token)
    {
        av[i] = strdup(token);
        if (!av[i])
            return (NULL);
        i++;
        token = strtok(NULL, " \t\n");
    }

    av[i] = NULL;
    return (av);
}


