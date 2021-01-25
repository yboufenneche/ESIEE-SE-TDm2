#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "affichage-processus.h"
#include "gestionFichiers.h"
//
int main()
{
    int fd;
    if (fork() != 0)
    { // processus pere
        fd = open("fichierTest.txt", O_RDONLY);
        printpidppid(litLigne(fd));
    }
    else
    {
        fd = open("fichierTest.txt", O_RDONLY);
        printpidppid(litLigne(fd));
    }
    return 0;
}