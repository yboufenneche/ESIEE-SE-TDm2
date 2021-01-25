#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
void printpid(char *c)
{
    printf("[pid:%d]%s", getpid(), c);
    fflush(stdout);
}
//
void printppid(char *c)
{
    printf("[ppid:%d]%s", getppid(), c);
    fflush(stdout);
}
//
void printpidppid(char *c)
{
    printf("[pid:%d, ppid:%d]%s", getpid(), getppid(), c);
    fflush(stdout);
}