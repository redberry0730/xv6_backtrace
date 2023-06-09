#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("usage: %s CMD\n", argv[0]);
        exit(1);
    }

    trace(1);

    exec(argv[1], &argv[1]);
    printf("exec error!");
    return 0;
}
