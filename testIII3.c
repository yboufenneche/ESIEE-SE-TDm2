#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "affichage-processus.h"
#include "gestionFichiers.h"
//
int main(int argc, char **argv)
{
    int fd;
    if (argc != 2)
    {
        fprintf(stderr, "usage : %s FichierDEntree.txt", argv[0]);
        exit(1);
    }
    fd = open(argv[1], O_RDONLY);
    if (fork() != 0)
    { // processus pere
        printpidppid(litLigne(fd));
    }
    else
    {
        printpidppid(litLigne(fd));
    }
    return 0;
}