#ifndef RSA_H
#define RSA_H


typedef unsigned long long uint64;

typedef struct
{
    int size;
    uint64 *uints;
} BigInteger;


int _eq(BigInteger, BigInteger);
uint64 *malloc8(int);
void zero(BigInteger *);
void one(BigInteger *);
void publicExponent(BigInteger *);
void random64(BigInteger *);
void copy(BigInteger *, BigInteger, int);
void _xor(BigInteger, BigInteger);
void add(BigInteger *, BigInteger);
void subtract(BigInteger *, BigInteger);
void multiplyDigit(BigInteger, uint64, BigInteger *);
void multiply(BigInteger, BigInteger, BigInteger, BigInteger *);
void modPow(BigInteger, BigInteger, BigInteger, BigInteger *);
void mod(BigInteger, BigInteger, BigInteger, BigInteger *);
void divide(BigInteger, BigInteger, BigInteger,
            BigInteger, BigInteger, BigInteger *);
void nextProbablePrime(BigInteger *);
void setPrivateExponent(BigInteger, BigInteger, BigInteger, BigInteger *);
void bitwiseMod(BigInteger *, int);
void lockSize(BigInteger *, int);


#endif