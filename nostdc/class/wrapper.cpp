#include <stdlib.h>

extern "C" void __cxa_pure_virtual ()
{
    abort ();
}

void * operator new (size_t size)
{
    return malloc (size);
}

void * operator new [] (size_t size)
{
    return malloc (size);
}

void operator delete (void *p)
{
    if (p) free (p);
}

void operator delete [] (void *p)
{
    if (p) free (p);
}

void operator delete (void *p, size_t)
{
    if (p) free (p);
}

