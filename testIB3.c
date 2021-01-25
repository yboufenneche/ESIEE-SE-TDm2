#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include "affichage-processus.h"
//
int main()
{
    if (fork() != 0)
    { // processus pere
        wait(NULL);
        printpid("pere\n");
    }
    else
    {
        printpidppid("fils\n");
    }
    return 0;
}