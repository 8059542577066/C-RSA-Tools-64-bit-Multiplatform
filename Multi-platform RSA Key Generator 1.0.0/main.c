#include "encoding.h"
#include <stdio.h>
#include <stdlib.h>


uint32 toUint32(const char *s)
{
    uint32 r;

    if (!sscanf(s, "%u", &r))
        exit(0);

    return r;
}

uint32 *malloc4(int size)
{
    uint32 *r = malloc(4 * size);

    if (!r)
        exit(0);

    return r;
}


int main(int argc, char *argv[])
{
    if (argc < 4)
        printf("ERROR - Usage: genrsa <Key Size> <N Seed> <P Seeds>");
    else
    {
        int size = toUint32(argv[1]);

        if (size < 1024)
            printf("ERROR - Key size should be at least 1024 bits.");
        else
        {
            Seeds seeds;
            seeds.size = argc - 2, seeds.uints = malloc4(seeds.size);
            int i, j;

            for (i = 0, j = 2; i != seeds.size; ++i, ++j)
                seeds.uints[i] = toUint32(argv[j]);

            createRSAKeys(size, seeds, "RSA PUBLIC KEY.txt", "PUBLIC KEY.txt",
                          "RSA PRIVATE KEY.txt", "PRIVATE KEY.txt");
            free(seeds.uints);
        }
    }

#ifndef _WIN32
    printf("\n");
#endif

    return 0;
}