#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char command[50];

    strcpy(command, "git status");
    system(command);

    return (0);
}