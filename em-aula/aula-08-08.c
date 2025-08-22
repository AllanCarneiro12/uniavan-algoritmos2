#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int main(void) {
    char cwd[PATH_MAX];

    if (getcwd(cwd, sizeof(cwd)) != NULL)

    printf("estudando comandos linux com linguagem C \n");
    printf("%s\n", cwd);

    return 0;
}