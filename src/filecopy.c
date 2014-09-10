#include <stdio.h>
#include <stdbool.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
    struct stat watchStat;
    struct stat targetStat;

    if (argc != 3)
    {
        puts("Error: provide a watch directory and target directory");
        return 1;
    }
    else if (stat(argv[1],&watchStat) < 0
            || stat(argv[2],&targetStat) < 0)
    {
        printf("Error reading the watch / target directory %s / %s\n", argv[1], argv[2]);
        return 1;
    }

    while (true)
    {
        puts("Checking target directory");
        sleep(5);
    }
    return 0;
}
