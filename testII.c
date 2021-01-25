#include <stdlib.h>
#include <unistd.h>
#include "affichage-processus.h"
//
int main()
{
    if (fork() != 0)
    { // processus pere
        printpid("Je suis le pere\n");
    }
    else
    {
        execl("./testIB1", "./testIB1", NULL);
        printpid("Echec de exec\n");
    }
    return 0;
}