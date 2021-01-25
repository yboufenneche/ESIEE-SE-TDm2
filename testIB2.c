#include <unistd.h>
#include "affichage-processus.h"
//
int main()
{
    if (fork() != 0)
    { // processus pere
        printpid("pere\n");
    }
    else
    {
        printpid("fils\n");
    }
    return 0;
}