#include "common.h"

#define MESSAGE "Hello Server!!!\n"

int
main()
{
int msg, len, i;
long int t;

for(i=0; i<20; i++)
{
    sleep(3);
    t=time(NULL);
    printf("FIFO Client...\n");

    if((msg = open(FIFO_NAME, O_WRONLY)) < 0)
    {
        fprintf(stderr,"%s: Невозможно открыть FIFO (%s)\n",
            __FILE__, strerror(errno));
        exit(-1);
    }

    len = strlen(MESSAGE);

    if(write(msg, MESSAGE, len) != len)
    {
        fprintf(stderr,"%s: Ошибка записи  в FIFO (%s)\n",
        __FILE__, strerror(errno));
        exit(-2);
    }
    close(msg);
}
    exit(0);
}