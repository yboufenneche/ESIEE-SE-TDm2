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
 fd = open("./fichierTest.txt", O_RDONLY);
if(fork()!=0){ // processus pere
 printpidppid(litLigne(fd));
 } else {
 printpidppid(litLigne(fd));
 }
return 0;
}