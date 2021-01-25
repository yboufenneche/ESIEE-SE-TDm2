#include <unistd.h>
#include "affichage-processus.h"
//
int main()
{
    if (fork() != 0)
    { // processus pere
        printpidppid("pere\n");
    }
    else
    {
        printpidppid("fils\n");
    }
    return 0;
}