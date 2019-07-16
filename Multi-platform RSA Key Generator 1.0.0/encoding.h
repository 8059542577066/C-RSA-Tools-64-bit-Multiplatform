#ifndef ENCODING_H
#define ENCODING_H


typedef unsigned int uint32;

typedef struct
{
    int size;
    uint32 *uints;
} Seeds;


void createRSAKeys(int, Seeds, const char *, const char *,
                   const char *, const char *);


#endif